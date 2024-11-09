//to search for an element in array using linear search and binary search
#include<stdio.h>
void LinearSearch(int a[],int n, int key)
{
    printf("\nLinear Search\n");
    int found,pos;
     for(int i=0;i<n;i++)
    {
        if(a[i]==key)
        {found=1;//set flag variable to 1 i.e true
        pos=i+1;
        break;}
    }
//display
    if(found)
    printf("%d found at position %d",key,pos);
    else
    printf("%d not found. %d",key);
}

void BinarySearch(int a[], int n, int key)
{
    printf("\nBinary Search\n");
    int ul=n;
    int ll=0;
    int mid,found,pos;
     while(ul>=ll)
    {
        mid=(ll+ul)/2;
    
        if(key==a[mid])
        {found=1;//set flag variable to 1 i.e true
        pos=mid+1;
        break;}

        else if(key>a[mid])
        ll=mid+1;

        else
        ul=mid-1;
    }
//display
    if(found)
    printf("%d found at position %d",key,pos);
    else
    printf("%d not found.",key);   
}

#include<stdio.h>
int main()
{
   int a[50], n,key;
printf("Enter total number of elements to be entered into the array: ");
scanf("%d",&n);

printf("Enter elements: \n");
for(int i=0; i<n; i++)
scanf("%d",&a[i]);

printf("Enter element to be searched: ");
scanf("%d", &key);

BinarySearch(a,n,key);
LinearSearch(a,n,key);
return 0;
}
