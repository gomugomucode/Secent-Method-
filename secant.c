#include <stdio.h>   // For input and output functions (printf, scanf)
#include <math.h>    // For mathematical functions like fabs()
#include <stdlib.h>  // For exit() function

/* 
   Define the function f(x) whose root we want to find.
   Here: f(x) = x³ − 2x − 5
*/
#define f(x) (x*x*x - 2*x - 5)

int main()
{
    // x0 and x1 are the initial guesses
    // x2 will store the next approximation of the root
    float x0, x1, x2;

    // f0, f1, f2 store function values at x0, x1, x2 respectively
    float f0, f1, f2;

    // e = tolerable error (accuracy)
    float e;

    // step counts iterations, N is maximum allowed iterations
    int step = 1, N;

    /* Take inputs from user */
    printf("Enter initial guesses:\n");
    scanf("%f %f", &x0, &x1);

    printf("Enter tolerable error:\n");
    scanf("%f", &e);

    printf("Enter maximum iteration:\n");
    scanf("%d", &N);

    /* Print table header */
    printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");

    /* Secant Method iteration starts */
    do
    {
        // Calculate function values at x0 and x1
        f0 = f(x0);
        f1 = f(x1);

        // If f(x0) == f(x1), division by zero will occur
        if (f0 == f1)
        {
            printf("Mathematical Error.\n");
            exit(0);
        }

        /*
           Secant Method formula:
           x2 = (x0*f(x1) - x1*f(x0)) / (f(x1) - f(x0))
        */
        x2 = (x0*f1 - x1*f0) / (f1 - f0);

        // Calculate function value at x2
        f2 = f(x2);

        // Print current step values
        printf("%d\t\t%f\t%f\t%f\t%f\n", step, x0, x1, x2, f2);

        // Shift values for next iteration
        x0 = x1;
        x1 = x2;

        // Increase iteration count
        step++;

        // If iterations exceed maximum limit, stop
        if (step > N)
        {
            printf("Not Convergent.\n");
            exit(0);
        }

    }
    // Continue until |f(x2)| becomes smaller than tolerable error
    while (fabs(f2) > e);

    // Final root
    printf("\nRoot is: %f\n", x2);

    return 0;
}
