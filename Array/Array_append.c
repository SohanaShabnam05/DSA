#include<stdio.h>
#include<stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\n Elements are\n");
    for(i=0 ; i<arr.length ; i++)
    {
        printf("%d ", arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if(arr->length< arr-> size)
    {
        arr->A[arr -> length++]=x;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};

    Append(&arr,10);
    Display(arr);

    return 0;
}