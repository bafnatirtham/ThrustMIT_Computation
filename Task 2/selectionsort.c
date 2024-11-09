#include<stdio.h>
int main()
{
int a[50], n,i,j,pos, small;

//array initialisation and input
printf("Enter number of elements to be stored in the array: ");
scanf("%d",&n);

for(i=0; i<n; i++)
{
printf("Enter element %d: ",(i+1));
scanf("%d",&a[i]);
}

//selection sort algorithm
for(i=0;i<n-1;i++)//loop for number of passes
{
    pos=i;
    small=a[i];

    for(j=i+1; j<n;j++)//to check for smallest element
    {
        if(a[j]<small)
        {
            pos=j;
        small=a[j];
        }
    }
        a[pos]=a[i];
        a[i]=small;
    }
    
//display
for(i=0;i<n;i++)
printf("%d \t",a[i]);

return (0);
}


