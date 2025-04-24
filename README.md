# 📐 C Project: Shape Calculator

## 🧠 Objective

To create a modular C program that calculates the **area** and **perimeter/circumference** of basic shapes—**Circle**, **Rectangle**, and **Triangle**—based on user input. The program demonstrates the use of **functions**, **conditional logic**, and **input validation**.

---

## 📌 Features

- ✅ Shape selection menu (Circle, Rectangle, Triangle)
- ✅ Input validation (positive numeric values only)
- ✅ Performs:
  - Area calculation
  - Perimeter/Circumference calculation
- ✅ Uses functions for each shape
- ✅ Displays results up to 2 decimal places

---

## 📐 Supported Shapes & Formulas

- **Circle**
  - Area = π × r²
  - Circumference = 2 × π × r
- **Rectangle**
  - Area = length × width
  - Perimeter = 2 × (length + width)
- **Triangle**
  - Validated with triangle inequality
  - Area = Heron’s formula
  - Perimeter = a + b + c

---

## 🛠️ How to Compile & Run

🔹 **Step 1:** Compile the program using GCC:
```bash
gcc shape_calculator.c -o shape_calculator -lm
```
> The `-lm` flag links the math library, required for the `sqrt()` function used in triangle area calculation.

🔹 **Step 2:** Run the program:
```bash
./shape_calculator
```
> This will start the program and prompt you to choose a shape and enter dimensions.

---

## 📁 Files Included

- `Calculator.c` → C source code file  
- `ACE_Project_Poromananda_Das.pdf` → Final project report

---

## 📖 Project Guidelines Followed

✔️ Functional programming structure  
✔️ Clean and commented code  
✔️ Input validation implemented  
✔️ Logical flow with formatted output

---

## 👨‍💻 Author

**Name:** Poromananda Das  
**Institution:** Assam down town University  
**Date:** April 2025  

---
