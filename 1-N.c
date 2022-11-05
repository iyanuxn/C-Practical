#include <stdio.h>

int main() {

/* Declaring the variables i and n. */
    int i;
    int n;

    /* Asking the user to enter a value for n. */
    printf("Enter your value for n: ");
    scanf("%d", &n);

    /* A for loop that prints the value of i from 1 to n. */
    for ( i = 1; i <= n; i++)
    {
       printf("%d \n",i);
    }
        
    return 0;
}

