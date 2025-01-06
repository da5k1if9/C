#include <stdio.h>
#include <math.h>

int main() {
    int a;
    float ratio, p, h, b;

    // Get user input for trigonometric function choice
    {printf("Enter (1)-for Sin  (2)-for Cos  (3)-for Tan: \n");
    scanf("%d", &a);}

    // Input based on user's choice
    if (a == 1) {
        // Sin function: Perpendicular and Hypotenuse
        printf("Enter Perpendicular and Hypotenuse: ");
        scanf("%f %f", &p, &h);
        ratio = p / h;
    } else if (a == 2) {
        // Cos function: Base and Hypotenuse
        printf("Enter Base and Hypotenuse: ");
        scanf("%f %f", &b, &h);
        ratio = b / h;
    } else if (a == 3) {
        // Tan function: Perpendicular and Base
        printf("Enter Perpendicular and Base: ");
        scanf("%f %f", &p, &b);
        ratio = p / b;
    } else {
        // Invalid choice
        printf("Please choose only as per the information provided.\n");
        return 0;  // Exit the program
    }

    // Output the ratio and angle name based on user input
    if (a == 1) {  // Sin
        printf("The value of ratio is sin: ");
        if (p>h)
        printf ("Perpendicular cannot be greater the Hypotenouse ");
        else if (ratio == 0)
            printf("sin(0)\n");
        else if (ratio == 0.5)
            printf("sin(30)\n");
        else if (ratio == sqrt(2) / 2)
            printf("sin(45)\n");
        else if (ratio == sqrt(3) / 2)
            printf("sin(60)\n");
        else if (ratio == 1)
            printf("sin(90)\n");
        else
            printf("Enter Standard Ratio\n");
    }
    else if (a == 2) {  // Cos
        printf("The value of ratio is cos: ");
            if (b>h)
        printf ("Base cannot be greater the Hypotenouse ");
        if (ratio == 0)
            printf("cos(90)\n");
        else if (ratio == 0.5)
            printf("cos(60)\n");
        else if (ratio == sqrt(2) / 2)
            printf("cos(45)\n");
        else if (ratio == sqrt(3) / 2)
            printf("cos(30)\n");
        else if (ratio == 1)
            printf("cos(0)\n");
        else
            printf("Enter Standard Ratio\n");
    }
    else {  // Tan
        printf("The value of ratio is tan: ");
        if (ratio == 0)
            printf("tan(0)\n");
        else if (ratio == 1)
            printf("tan(45)\n");
        else if (ratio == sqrt(3))
            printf("tan(60)\n");
        else if (ratio == 1 / sqrt(3))
            printf("tan(30)\n");
        else if (b==0)  // Approximation for tan(90)
            printf("tan(90)\n");
        else 
            printf("Enter Standard Ratio\n");
    }

    return 0;
}
