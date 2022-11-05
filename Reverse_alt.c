#include<stdio.h>
#include<string.h>


/**
 * This function takes a string as an argument and prints it in reverse
 * 
 * @param sentence the sentence to be reversed
 */
void reverseSentence(char sentence []){
    int i;
    int len = strlen(sentence);
    for (i = len-1 ; i >= 0 ; i--)
    {
        printf("%c", sentence[i]);
    }
    printf("\n");
        
}


int main()
{
    printf("Enter a sentence to reverse: ");
    char sentence[100];
    fgets(sentence,100,stdin);
    reverseSentence(sentence);
    return 0;
}
