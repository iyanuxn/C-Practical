#include<stdio.h>
#include<math.h>

int main()
{
/* Declaring the variables that will be used in the program. */
    double a,b,c,d,x1,x2,r,i;
    int j;

    /* This is a for loop that is asking the user to input the values of a, b, and c. */
    for (j = 0; j < 3; j++)
    {
        if (j = 1)
        {
            printf("Enter the value of a for your quadratic equation: ");
            scanf("%lf", &a);   
        }
        if (j = 2)
        {
            printf("Enter the value of b for your quadratic equation: ");
            scanf("%lf", &b);   
        }
        if (j = 3)
        {
            printf("Enter the value of c for your quadratic equation: ");
            scanf("%lf", &c);   
        }
        
    }
    

    /* This is the discriminant. It is used to determine the number of roots that the quadratic
    equation has. */
    d = b*b - (4*a*c);

    /* This is the first condition that the program will check. If the discriminant is greater than 0,
    then the program will calculate the roots of the quadratic equation. */
    if (d > 0) {
        x1 = (-b + sqrt(d)) / (2 * a);
        x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots are x1: %.2lf and x2: %.2lf \n", x1, x2);
    }

    // condition for real and equal roots
    else if (d == 0) {
        x1 = x2 = -b / (2 * a);
        printf("x1 = x2 = %.2lf \n", x1);
    }

    // if roots are not real
    else {
        r = -b / (2 * a);
        /* Calculating the imaginary part of the quadratic equation. */
        i = sqrt(-d) / (2 * a);
        printf("x1 = %.2lf+%.2lfi and x2 = %.2f-%.2fi \n", r, i, r, i);
    }

        return 0;
}
