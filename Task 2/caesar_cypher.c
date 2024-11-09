#include<stdio.h>
#include<string.h>

int main()
{
    char code[100];
    int i=0;
    printf("Enter your codeword: ");
    gets(code);

    char encryption [100];

    for(i=0; i<strlen(code);i++)
    {
        if(code[i]>=97 && code[i]<=122)
         code[i]=code[i]-32;
    }

      //13 shift caesar cypher
    for(i=0; i<strlen(code);i++)
    {
    if(code[i]>=65 && code[i]<=90)
     {
        if (code[i]>=78)
        {
            code[i]= (code[i])-13;
            encryption[i]=code[i];
        }

        else 
        {
            code[i]=(code[i])+13;
            encryption[i]=code[i];
        }
     } 
    }
    printf("Encryption is: %s",encryption);


return 0;
}