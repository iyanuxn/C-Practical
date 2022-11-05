#include <stdio.h>

int main() {

    int i; 

    char name[10][40];

    for (i = 0; i < 10; i++)
    {
       printf("Enter your name: ");
       scanf("%s", name[i]);
    }

    printf("\n The names inputted are: \n");

    for (i = 0; i < 10 ; i++)
    {
        printf("%s \n", name[i]);
    }
    
    
    return 0;
}

