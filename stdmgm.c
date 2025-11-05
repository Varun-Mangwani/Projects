#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <conio.h>

#define MAX 100
#define SHEET_URL "YOUR_GOOGLE_WEB_APP_URL"  // Replace with your Web App URL

struct Student {
    int id;
    char name[50];
    int age;
    float marks;
};

struct Student students[MAX];
int student_count = 0;

// Console color
void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

// Animated loading
void loadingAnimation(const char* task) {
    setColor(14);
    printf("%s", task);
    for(int i=0;i<10;i++) {
        printf(".");
        Sleep(150);
    }
    printf("\n");
    setColor(7);
}

// Send student to Google Sheet using curl system command
void sendToGoogleSheet(struct Student s) {
    char cmd[600];
    sprintf(cmd,
        "curl -s -X POST -H \"Content-Type: application/json\" -d \"{\\\"id\\\":%d,\\\"name\\\":\\\"%s\\\",\\\"age\\\":%d,\\\"marks\\\":%.2f}\" %s",
        s.id, s.name, s.age, s.marks, SHEET_URL);
    system(cmd);
}

// Add student
void addStudent() {
    struct Student s;
    setColor(11);
    printf("Enter Student ID: "); scanf("%d", &s.id);
    printf("Enter Name: "); scanf(" %[^\n]", s.name);
    printf("Enter Age: "); scanf("%d", &s.age);
    printf("Enter Marks: "); scanf("%f", &s.marks);

    students[student_count++] = s;
    loadingAnimation("Saving student");
    sendToGoogleSheet(s);

    setColor(10);
    printf("Student added successfully!\n");
    setColor(7);
}

// View students
void viewStudents() {
    if(student_count == 0) {
        setColor(12);
        printf("No students found!\n");
        setColor(7);
        return;
    }

    setColor(9);
    printf("ID\tName\t\tAge\tMarks\n");
    setColor(7);
    for(int i=0;i<student_count;i++) {
        printf("%d\t%-10s\t%d\t%.2f\n", students[i].id, students[i].name, students[i].age, students[i].marks);
    }
}

// Update student
void updateStudent() {
    int id, found=0;
    printf("Enter Student ID to update: "); scanf("%d", &id);
    for(int i=0;i<student_count;i++) {
        if(students[i].id == id) {
            found = 1;
            printf("Enter new Name: "); scanf(" %[^\n]", students[i].name);
            printf("Enter new Age: "); scanf("%d", &students[i].age);
            printf("Enter new Marks: "); scanf("%f", &students[i].marks);
            loadingAnimation("Updating student");
            sendToGoogleSheet(students[i]);
            setColor(10);
            printf("Student updated!\n");
            setColor(7);
            break;
        }
    }
    if(!found) {
        setColor(12);
        printf("Student ID not found!\n");
        setColor(7);
    }
}

// Delete student
void deleteStudent() {
    int id, found=0;
    printf("Enter Student ID to delete: "); scanf("%d", &id);
    for(int i=0;i<student_count;i++) {
        if(students[i].id == id) {
            found = 1;
            for(int j=i;j<student_count-1;j++) {
                students[j] = students[j+1];
            }
            student_count--;
            loadingAnimation("Deleting student");
            setColor(10);
            printf("Student deleted!\n");
            setColor(7);
            break;
        }
    }
    if(!found) {
        setColor(12);
        printf("Student ID not found!\n");
        setColor(7);
    }
}

// Menu
void menu() {
    int choice;
    do {
        system("cls");
        setColor(14);
        printf("===== Student Management System =====\n");
        setColor(11);
        printf("1. Add Student\n2. View Students\n3. Update Student\n4. Delete Student\n5. Exit\n");
        setColor(7);
        printf("Enter choice: "); scanf("%d", &choice);

        switch(choice) {
            case 1: addStudent(); break;
            case 2: viewStudents(); break;
            case 3: updateStudent(); break;
            case 4: deleteStudent(); break;
            case 5: exit(0);
            default: setColor(12); printf("Invalid choice!\n"); setColor(7); Sleep(1000);
        }
        printf("Press any key to continue..."); getch();
    } while(1);
}

int main() {
    menu();
    return 0;
}
