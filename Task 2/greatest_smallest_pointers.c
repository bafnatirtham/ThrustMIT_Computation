#include <stdio.h>

void findGreatestSmallest(int *a, int *b, int *c, int *greatest, int *smallest) 
{
   
    *greatest = (*a > *b && *a > *c) ? *a : (*b > *c ? *b : *c);
    *smallest = (*a < *b && *a < *c) ?*a :(*b < *c ? *b : *c);
}

int main() {
    int a, b, c;
    int greatest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    findGreatestSmallest(&a, &b, &c, &greatest, &smallest);

    //display
    printf("Greatest number: %d\n", greatest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}
