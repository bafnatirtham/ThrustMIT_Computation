#include<stdio.h>
int main()
{
int a[50], n;
printf("Enter number of elements to be stored in the array: ");
scanf("%d",&n);

for(int i=0; i<n; i++)
{
printf("Enter element %d: ",(i+1));
scanf("%d",&a[i]);
}
int max=a[0], min=a[0];
for(int i=0;i<n-1;i++)
{
    if(a[i]>=max)
        max=a[i];
    if(a[i]<=min)
        min=a[i];
}
printf("Largest element in array= %d", max);
printf("\nSmallest element in array= %d", min);
return 0;
}