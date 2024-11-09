//bubble sort
#include<stdio.h>
int main()
{
    
int a[50], n, temp;
//array initialisation and input
printf("Enter number of elements to be stored in the array: ");
scanf("%d",&n);

for(int i=0; i<n; i++)
{
printf("Enter element %d: ",(i+1));
scanf("%d",&a[i]);
}

//bubble sort snippet
printf("\nSorted Array in Ascending Order: ");

for(int i=0; i<n; i++)//passes
{
    for(int j=0; j<n-i-1;j++)//comparisons
    {
        if(a[j]>=a[j+1])
        {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}

//output
for(int i=0; i<n; i++)
printf("%d  ",a[i]);

return 0;
}