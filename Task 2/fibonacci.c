//fibonacci series
#include<stdio.h>
int main()
{
 int first =0;
 int second=1;
 int n=0;
 int term;
 printf("Enter number of terms to generate fibonacci series till: ");
 scanf("%d",&n);
 printf("\n Fibonacci Series upto %d terms \n", n);
 printf("%d, %d ",first, second);
 for(int i=1;i<n-1;i++)
 {
    term = first+second;
    printf(", %d ",term);
    first=second;
    second=term;
 }
}