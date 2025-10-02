#include <stdio.h>

#include <math.h>
#include <stdlib.h>

#define  PI  3.1415926

int area, length, Width, radius, side, base, height,choice,A,B,C,D,bredth,n,a,i, operation;
double input,result,angle,num1, num2, result, sum = 0.0, mean, variance = 0.0, stddev;
 

 


void waitForEnter() {
    printf("\nPress Enter to return to Main Menu...");
    getchar();  // clears leftover newline
    getchar();  // actually waits for user to press Enter
}


void pera_calc(){
    int pera_choice;

    printf("______________________________________________________\n");
    printf("-_-_-_-_-_-_-||       Parameter Calculation            ||-_-_-_-_-_-_-\n");
    printf("-_-_-_-_-_-_-||  Available On Varun-Mangwani(GitHub)   ||-_-_-_-_-_-_-\n");
    printf("------------------------------------------------------\n");
    printf("$1 Perameter Of Square.      \n");
    printf("$2 Perameter Of Circle.      \n");
    printf("$3 Perameter of Rectangel.   \n");
    printf("$4 Perameter of Parallelogram  \n");
    printf("$5 Perameter of Triangle   \n");
    printf("$6 Perameter of Polygon   \n");
    printf("$7 Perameter of Trapazium   \n");
    printf("$0 Return To The Menu  \n");
    printf("$8 Exit The Program   \n");
    // printf("---------------------------\n");
    printf("Select 1-7 Range: ");
    scanf("%d", &pera_choice);


    switch (pera_choice)
    {
    case 1:
        printf("Enter The Side: ");
        scanf("%d",&side);
        result = 4*side;
        
         
        break;
    
    case 2:
     printf("Enter The Radius: ");
        scanf("%d",&radius);
        result = 2*(PI * radius);
         
        break;
        
    
    case 3:
     printf("Enter The Length: ");
     scanf("%d",&length);
     printf("Enter The Width: ");
     scanf("%d",&Width);
        result = 2*(length + Width);
         
        break;
    case 4:
     printf("Enter The Adjacent Sides\n A: ");
     scanf("%d",&A);
     printf("Enter The Adjacent Sides\n B: ");
     scanf("%d",&B);
        result = 2*(A+B);
         
        break;
    case 5:
     printf("Enter The  Sides\n Side A: ");
     scanf("%d",&A);
     printf("Enter The Sides\n Side B: ");
     scanf("%d",&B);
     printf("Enter The Sides\n Side C: ");
     scanf("%d",&C);
        result = A+B+C;
         
        break;
    case 6:
     printf("Enter The  Sides Of Polygon\n SideS: ");
     scanf("%d",&side);
     printf("Enter The Side length\n Side Length: ");
     scanf("%d",&length);
        result = side*length;
         
        break;
        case 7:

     printf("Enter The  Sides Of Trapezium: ");
     printf("Enter The  A Side: ");
     scanf("%d",&A);
        printf("Enter The  B Side: ");
        scanf("%d",&B);
        printf("Enter The  C Side: ");
        scanf("%d",&C);
        printf("Enter The  D Side: ");
        scanf("%d",&D);
        result = A+B+C+D;
         
        break;
        case 8:
exit(8);

        break;

    }
    printf("Resut Of Operation Is:%lf ", result);
    waitForEnter();
    
}

void area_calc(){
    int area_choice;

    printf("______________________________________________________\n");
    printf("-_-_-_-_-_-_-||       Area Calculation            ||-_-_-_-_-_-_-\n");
    printf("-_-_-_-_-_-_-||  Available On Varun-Mangwani(GitHub)   ||-_-_-_-_-_-_-\n");
    printf("------------------------------------------------------\n");
    printf("$1 Area Of Square.      \n");
    printf("$2 Area Of Circle.      \n");
    printf("$3 Area of Rectangel.   \n");
    printf("$4 Area of Parallelogram  \n");
    printf("$5 Area of Triangle   \n");
    printf("$6 Area of Polygon   \n");
    printf("$7 Area of Trapazium   \n");
    printf("$0 Return To The Menu   \n");
    printf("$8 Exit The Program   \n");
    // printf("---------------------------\n");
    printf("Select 1-7 Range: ");
    scanf("%d", &area_choice);

    switch (area_choice)
    {
    case 1:
        printf("Enter The Side: ");
        scanf("%d",&side);
        result = side*side;
 
        break;
    
    case 2:
     printf("Enter The Radius: ");
        scanf("%d",&radius);
        result = PI * radius *radius;
         
        break;
    
    case 3:
     printf("Enter The Length: ");
     scanf("%d",&length);
     printf("Enter The Width: ");
     scanf("%d",&Width);
        result = (length * Width);
         
        break;
    case 4:
      printf("Enter The Bredth: ");
     scanf("%d",&bredth);
     printf("Enter The Height: ");
     scanf("%d",&height);
        result = (bredth * height);
         
        break;
    case 5:
     printf("Enter The  Base: ");
     scanf("%d",&base);
     printf("Enter The Height: ");
     scanf("%d",&height);
        result = 0.5*base*height;
         
        break;
    case 6:
     printf("Enter The Number Of Sides: ");
     scanf("%d",&n);
     printf("Enter The Length Of Each Side: ");
     scanf("%d",&a);
        result = (n * a * a) / (4 * tan(PI / n));
         
        break;
        case 7:

     printf("Enter The  Sides Of Trapezium: ");
     printf("Enter The  A Side: ");
     scanf("%d",&A);
        printf("Enter The  B Side: ");
        scanf("%d",&B);
     scanf("%d",&A);
        printf("Enter The  Height: ");
        scanf("%d",&height);
        result = 0.5*(a + B)*height;
         
        break;
        case 8:
exit(8);
         
break;

    }
    printf("Your Operation Result Is:%lf ", result);
    waitForEnter();
    
}

void trigno(){
    int trigno_choice;
    system("clear");

    printf("_____________||||||||||||||||||||||||||||||||||||||||||||_____________\n");
    printf("_____________||________________________________________||_____________\n");
    printf("-_-_-_-_-_-_-||           Trigonometry Solver          ||-_-_-_-_-_-_-\n");
    printf("-_-_-_-_-_-_-||  Available On Varun-Mangwani(GitHub)   ||-_-_-_-_-_-_-\n");
    printf("-------------||----------------------------------------||-------------\n");
    printf("             ||||||||||||||||||||||||||||||||||||||||||||\n");
    printf("Select a function:\n");
    printf("1. Sin(angle)\n");
    printf("2. Cos(angle)\n");
    printf("3. Tan(angle)\n");
    printf("4. Cosec(angle)\n");
    printf("5. Sec(angle)\n");
    printf("6. Cot(angle)\n");
    printf("8. Exit Programme\n");
    printf("Enter your choice (1-6): ");
    scanf("%d", &trigno_choice);

    printf("Enter angle in degrees: ");
    scanf("%lf", &angle);

    // Convert degrees to radians
    double rad = angle * (PI / 180.0);

    switch (trigno_choice) {
        case 1:
            result = sin(rad);
            printf("sin(%.2lf°) = %.4lf\n", angle, result);
             
            break;
        case 2:
            result = cos(rad);
            printf("cos(%.2lf°) = %.4lf\n", angle, result);
             
            break;
        case 3:
            if (fmod(angle, 180.0) == 90.0) {
                printf("tan(%.2lf°) is undefined.\n", angle);
            } else {
                result = tan(rad);
                printf("tan(%.2lf°) = %.4lf\n", angle, result);
            }
             
            break;
        case 4:
            if (fmod(angle, 180.0) == 0.0) {
                printf("cosec(%.2lf°) is undefined.\n", angle);
            } else {
                result = 1 / sin(rad);
                printf("cosec(%.2lf°) = %.4lf\n", angle, result);
            }
             
            break;
        case 5:
            if (fmod(angle, 180.0) == 90.0) {
                printf("sec(%.2lf°) is undefined.\n", angle);
            } else {
                result = 1 / cos(rad);
                printf("sec(%.2lf°) = %.4lf\n", angle, result);
            }
             
            break;
        case 6:
            if (fmod(angle, 180.0) == 0.0) {
                printf("cot(%.2lf°) is undefined.\n", angle);
            } else {
                result = 1 / tan(rad);
                printf("cot(%.2lf°) = %.4lf\n", angle, result);
            }
             
            break;
        case 8:
        exit(8);
         
        break;
        default:
            printf("Invalid choice.\n");
    }
    printf("Your Operation result Is:%lf", result);
    
}

void algebraMenu() {
    int choice;
    double a, b, c, discriminant, root1, root2;

    while (1) {
        printf("===== Algebra Menu =====\n");
        printf("1. Solve linear equation (ax + b = 0)\n");
        printf("2. Solve quadratic equation (ax^2 + bx + c = 0)\n");
        printf("3. Back to Main Menu\n");
        printf("3. Exit The Programme\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 3) break;

        switch (choice) {
            case 1:
                printf("Enter coefficients a and b (ax + b = 0): ");
                scanf("%lf %lf", &a, &b);
                if (a == 0) {
                    if (b == 0) printf("Infinite solutions.\n");
                    else printf("No solution.\n");
                } else {
                    printf("Solution: x = %.6f\n", -b / a);
                }
                 waitForEnter();
                break;

            case 2:
                printf("Enter coefficients a, b, c (ax^2 + bx + c = 0): ");
                scanf("%lf %lf %lf", &a, &b, &c);

                if (a == 0) {
                    printf("This is not a quadratic equation (a=0).\n");
                     
                    break;
                }

                discriminant = b*b - 4*a*c;

                if (discriminant > 0) {
                    root1 = (-b + sqrt(discriminant)) / (2*a);
                    root2 = (-b - sqrt(discriminant)) / (2*a);
                    printf("Two real roots: x1 = %.6f, x2 = %.6f\n", root1, root2);
                } else if (discriminant == 0) {
                    root1 = -b / (2*a);
                    printf("One real root (double root): x = %.6f\n", root1);
                } else {
                    double realPart = -b / (2*a);
                    double imagPart = sqrt(-discriminant) / (2*a);
                    printf("Complex roots: x1 = %.6f + %.6fi, x2 = %.6f - %.6fi\n",
                           realPart, imagPart, realPart, imagPart);
                }
                 waitForEnter();
                break;
                

            default:
                printf("Enter Available Values! Eg:1-2\n");
                waitForEnter();
        }
        printf("\n");
    }
}

void unit_conv() {
    
    

    while (1) {
        printf("\n=== UNIT CONVERTER ===\n");
        printf("Select conversion type:\n");
        printf("1. Celsius to Fahrenheit\n");
        printf("2. Meter to Feet\n");
        printf("3. Kilogram to Pounds\n");
        printf("4. Hours to Seconds\n");
        printf("5. Gallons to Liters\n");
        printf("0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter temperature in Celsius: ");
                scanf("%lf", &input);
                result = (input * 9/5) + 32;
                printf("%.2lf Celsius is %.2lf Fahrenheit\n", input, result);
                waitForEnter();
                break;
            case 2:
                printf("Enter length in Meters: ");
                scanf("%lf", &input);
                result = input * 3.28084;
                printf("%.2lf Meters is %.2lf Feet\n", input, result);
                 waitForEnter();
                break;
            case 3:
                printf("Enter mass in Kilograms: ");
                scanf("%lf", &input);
                result = input * 2.20462;
                printf("%.2lf Kilograms is %.2lf Pounds\n", input, result);
                 waitForEnter();
                 break;
            case 4:
                printf("Enter time in Hours: ");
                scanf("%lf", &input);
                result = input * 3600;
                printf("%.2lf Hours is %.2lf Seconds\n", input, result);
                 waitForEnter();
                 break;
            case 5:
                printf("Enter volume in Gallons: ");
                scanf("%lf", &input);
                result = input * 3.78541;
                printf("%.2lf Gallons is %.2lf Liters\n", input, result);
                 waitForEnter();
                 break;
            case 0:
                printf("Thank you for using the Unit Converter!\n");
                return;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}


void statistics() {
    int n;
    printf("How many numbers? ");
    scanf("%d", &n);

    double data[n];
    printf("Enter the numbers separated by spaces:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
    }

    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += data[i];
    }
    double mean = sum / n;

    double variance = 0.0;
    for (int i = 0; i < n; i++) {
        variance += pow(data[i] - mean, 2);
    }
    double stddev = sqrt(variance / n);

    printf("Mean: %.2lf\n", mean);
    printf("Standard Deviation: %.2lf\n", stddev);

    waitForEnter();
    
}


void Basic_Multi() {
   

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    printf("Choose operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("Enter choice: ");
    scanf("%d", &operation);

    switch(operation) {
        case 1:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            waitForEnter();
            break;
            case 2:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            waitForEnter();
            break;
            case 3:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            waitForEnter();
            break;
            case 4:
            if(num2 != 0) {
                result = num1 / num2;
                printf("Result: %.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            waitForEnter();
            break;
            default:
            printf("Invalid operation choice.\n");
            waitForEnter();
            break;
    }
}



int main()
{
    while (1)
    {
     system("cls");   
        
 
    printf("\n\n---------------------------------------------------------------\n");
    printf("      ▄▀▄  █    █        █▀█  █ █  █▀█  █▀█  █▀█  █▀▀  █▀▀         \n");
    printf("      █▀█  █▄▄  █▄▄      █▀▀  █▄█  █▀▄  █▀▀  █▄█  ▄██  ██▄         \n\n");
    printf("       █▀▀  ▄▀▄  █    █▀▀  █ █  █    ▄▀▄  ▀█▀  █▀▀  █▀█            \n");
    printf("       █▄▄  █▀█  █▄▄  █▄▄  █▄█  █▄▄  █▀█   █   ██▄  █▀▄            \n");
    printf("     ______________________________________________________        \n");
    printf("     -_-_-_-_-_-_-|| Made By Varun-Mangwani ||-_-_-_-_-_-_-        \n");
    printf("     -_-_-_-_-_-_-||  Available On GitHub   ||-_-_-_-_-_-_-        \n");
    printf("     ------------------------------------------------------        \n");
    printf("     $1 Perameter Calculaer.      $2 Algebra                      \n");
   printf("     $3 Area Calculater.           $4 Unit Conversion              \n");
    printf("     $5 Trignomatry.               $6 Statistics.                  \n");
    printf("     $7 Basic Multiplication.      $8 EXit Programme               \n");
    printf("     ______________________________________________________        \n");
    printf("     -_||Varun-Mangwani/Projects/All-In-One-calculater.c||_-       \n");
    printf("-------------------------------------------------------------------\n");
    printf("     Select 1-8 Range: ");

scanf("%d",&choice);

    
    switch (choice)
    {
    case 1:
        pera_calc();
        break;
    
    case 2:
        algebraMenu();
        break;
    
    case 3:
        area_calc();
        break;
    
    case 4:
        unit_conv();
        break;
    
    case 5:
    system("cls");
    printf("System Cleared!");
        trigno();
        break;
    case 6:

    statistics();
        break;
        break;
        
        case 7:
    Basic_Multi();
        break;
    
    case 8:
    exit(8);
        break;
    
    default:
    printf("Enter Available Values! Eg:1-5");
        break;
    }
}


    return 0;
}