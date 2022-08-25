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

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index <= arr->length)
    {
        for(i=arr->length; i>index; i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int main()
{
    struct Array arr = {{2,3,4,5,6},10,5};

   // Append(&arr,10);
   Insert(&arr,5,10);
    Display(arr);

    return 0;
}