#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int *A;
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d", arr.A[i]);
    }
}

int main()
{
    struct Array arr; 
    int n, i;
    printf("Enter the Size of an array");
    scanf("%d", &arr.size);

    arr.A=(int *)malloc(arr.size*sizeof(int));
    arr.length = 0;

    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("Enter all elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr.A[i]);
        
    }
    arr.length=n;

    Display(arr);

    return 0;
}