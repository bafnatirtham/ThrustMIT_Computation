#include<stdio.h>
int main()
{
    int n=0;
    printf("Enter a number\n");
    printf("System will ask for input again if 0 is entered. To stop please enter a negative integer: ");
    scanf("%d",&n);

    do
    {
        if(n==0)
        {
        printf("0 entered. Please enter a number again: ");
        scanf("%d",&n);
        continue;
        }
        
        if(n>0)
        {
            printf("Number entered is %d.",n);
            printf("\n\n Enter a number: ");
            scanf("%d",&n);
        }
    }while(n>=0);

printf("Program executed succesfully.");   

return 0;
}