## 🧮 **Multiplication Table Generator (C Program)**

### 📄 **Description:**

This simple C program generates a **multiplication table** for a number entered by the user.
It demonstrates basic concepts like **loops**, **functions**, and **user input handling** in C.

---

### ⚙️ **How It Works:**

1. The program asks the user to **enter a number**.
2. It uses a **`for` loop** to calculate and display the multiplication results from `1 × num` up to `10 × num`.
3. The multiplication logic is placed inside a **function named `table()`** for better structure and reusability.

---

### 💻 **Code Flow:**

```
main() → calls table() → user enters number → loop prints table
```

---

### 🧠 **Concepts Used:**

* `#include <stdio.h>` → For input/output functions (`printf`, `scanf`)
* `#include <windows.h>` → Included but not directly used (can be removed if color isn’t needed)
* **Functions** → The program defines a custom function `table()`
* **For Loop** → Used to iterate from 1 to 10
* **Variables:**

  * `num` → stores user input number
  * `i` → loop counter
  * `tbl` → stores the product (`num * i`)

---

### 🧾 **Sample Output:**

```
Enter The Number: 5

5x1 = 5
5x2 = 10
5x3 = 15
5x4 = 20
5x5 = 25
5x6 = 30
5x7 = 35
5x8 = 40
5x9 = 45
5x10 = 50
```

---

### 🪟 **Optional Enhancement:**

If you want to make it colorful (Windows only), add this line before `printf`:

```c
system("color 0A");  // Green text on black background
```


