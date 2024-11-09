//program to multiply 2 matrices
//matrix_multiplication.c
// main expression--> c[i][j]=c[i][j] + a[i][k] * b[k][j]
#include<stdio.h>
#include<stdlib.h>
int main()
{
//initialising of arrays and elements
    int m,n,p,q,i,j,k;
    int a[10][10],b[10][10];
    printf("Enter dimensions for 1st matrix: ");
    scanf("%d %d",&m,&n);
     printf("Enter dimensions for 2nd matrix: ");
    scanf("%d %d",&p,&q);

//checking multiplication condition for matrices
    if(n!=p)
    {
        printf("Matrices are not multiplicable");
        exit(0);
    }
//input sequence for elements in matrices
    printf("Enter elements for first matrix: \n");
    for(int i=0; i<m; i++)
    {
         for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]); 

         printf("\n");
    }

    printf("Enter elements for second matrix: \n");
    for(int i=0; i<p; i++)
    {
         for(int j=0;j<q;j++)
            scanf("%d",&b[i][j]); 

         printf("\n");
    }

//matrix multiplication algorithm
    int c[10][10];
    for(i=0;i<n;i++)
    {
        for(j=0;j<q;j++)
        {
            c[i][j]=0;
            for(k=0;k<n;k++)
                c[i][j]=c[i][j]+a[i][k]*b[k][j];

        }
    }

//display of resultant matrix
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        printf("%d\t",c[i][j]);

        printf("\n");
    }

    return 0;
}