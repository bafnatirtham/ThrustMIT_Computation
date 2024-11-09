//swapping using pointers
#include<stdio.h>
int main()
{   int a, *p=&a ;
    int b, *q=&b ;
    printf("Enter two numbers a and b");
    scanf("%d %d",&a,&b);

    int temp, *s=&temp;

    s=p;
    p=q;
    q=s;

    printf("%d %d",*p,*q);
    return 0;
}