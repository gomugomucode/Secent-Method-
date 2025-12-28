# Secant Method in C

## Description
This program implements the Secant Method to find the root of a nonlinear equation:

f(x) = x³ − 2x − 5

The method starts with two initial guesses and iteratively approaches the root
until the given tolerable error is satisfied or the maximum number of iterations
is reached.

---

## Files
- secant.c   : C source code
- secant     : Compiled executable
- README.md  : Instructions to compile and run the program

---

## Requirements
- GCC compiler
- Terminal (Linux / macOS / WSL)

Check GCC installation:
gcc --version

---

## Compile the Program
Open terminal in the project directory and run:

gcc secant.c -lm -o secant

Explanation:
- gcc        → GNU C Compiler
- secant.c   → Source file
- -lm        → Math library (for fabs)
- -o secant  → Output executable name

---

## Run the Program
After compilation, run:

./secant

---

## Sample Input
Enter initial guesses:
1 2

Enter tolerable error:
0.00001

Enter maximum iteration:
10

---

## Sample Output
Step            x0              x1              x2               f(x2)
1               1.000000        2.000000        2.200000         1.248001
2               2.000000        2.200000        2.088968        -0.062126
3               2.200000        2.088968        2.094233        -0.003557
4               2.088968        2.094233        2.094553         0.000011
5               2.094233        2.094553        2.094552         0.000001

Root is: 2.094552

---

## Notes
- Initial guesses should be chosen close to the actual root.
- If "Not Convergent" appears, increase maximum iterations or change guesses.
- If "Mathematical Error" appears, f(x0) and f(x1) are equal.

---

## Method Used
Secant Method (Numerical Method for solving nonlinear equations)

---

## Author
Written in C for Numerical Methods practice.
