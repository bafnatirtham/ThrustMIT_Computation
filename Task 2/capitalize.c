#include <stdio.h>

#include <string.h>

int main() 
{
    char str[200], max[50], word[50];
    int i=0, j=0, lenmax=0, lenword=0;

    // Taking input from the user
    printf("Enter a sentence: ");
    gets(str);
    str[strlen(str)]=' ';
    // Processing each word
    for (i = 0; str[i] != '\0'; i++) 
    {
        // Check if the character is part of a word
        if (str[i] != ' ' ) 
        {
            word[j] = str[i];
            j++;
            lenword++;
        } 
        
        else if (lenword > 0) 
        {
           word[j] = '\0';
           word[0] = word[0]-32;//capitalize
           printf("%s ", word);

            if (lenword > lenmax)
             {
                lenmax = lenword;
                strcpy(max, word);
            }
            
          
            j = 0;
            lenword = 0;
        }
    }
    
    //output
    
    printf("\nThe largest word is: %s\n", max);
    
    return 0;
}