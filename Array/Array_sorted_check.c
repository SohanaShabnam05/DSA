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

void InsertSort(struct Array *arr, int x)
{
    int i=arr->length - 1;
    if(arr->length == arr->size)
        return;
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1] = arr->A[i];
        i--;
    }

    arr->A[i+1]=x;
    arr->length++;
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int isSorted(struct Array arr)
{
    int i;
    for(i=0; i<arr.length - 1; i++)
    {
        if(arr.A[i]>arr.A[i+1])
            return 0;
    }
    return 1;
}


void Rearrange(struct Array *arr)
{
    int i,j;
    i=0;
    j=arr->length-1;

    while(i<j)
    {
        while(arr->A[i]<0)i++;
        while(arr->A[i]>=0)j--;
        if(i<j) swap(&arr->A[i], &arr->A[j]);
    }

}

int main()
{
    //struct Array arr={{2,3,5,10,15},10,5};
    struct Array arr={{2,-3,5,-10,15},10,5};

    //InsertSort(&arr, 12);
    //printf("%d \n", isSorted(arr));
    Rearrange(&arr);

    Display(arr);

    return 0;
}