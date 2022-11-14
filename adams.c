#include <stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

int main() {
    int no_trials, i, j;
    FILE *fpointer = fopen("adam.in.txt","r");
    if ((fpointer = fopen("adam.in.txt","r")) == NULL)
    {
        printf("Null File");
        exit(1);
    }
    
    fscanf(fpointer, "%d", &no_trials);
    char steps[no_trials][20];

    /* This is a for loop that is asking the user to input the sequence of steps for each trial. */
    for (i = 0; i < no_trials; i++)
    {   
        fscanf(fpointer, "%s",steps[i]);
    }

    /* This is a for loop that is checking if the first letter of the string is 'U' and if it is,
    it increments the number of steps by 1. If it is not, it breaks out of the loop. */
    for (i = 0; i < no_trials; i++)
    {
        int step_len;
        step_len = strlen(steps[i]);
        int no_steps = 0;
        
        /* This is a for loop that is checking if the first letter of the string is 'U' and if it is,
        it increments the number of steps by 1. If it is not, it breaks out of the loop. */
        for (j = 0; j < step_len; j++)
        {
            if (toupper((steps[i])[j]) == 'U')
            {
                no_steps++;
            }
            else{
                break;
            }
        }
        printf("%s %d \n", steps[i], no_steps);
    }

    fclose(fpointer);

    return 0;
}
