// Passing Arrays to Functions

#include<stdio.h>

void display(int a[], int size);

int main()
{
    int a[] = {10,20,30,40,50};

    display(a, 5);

    return 0;
}

void display(int a[], int size)
{
    int i;

    for(i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
}

// Find the sum using a function.

#include<stdio.h>

int sumArray(int a[], int size);

int main()
{
    int a[] = {2,4,6,8,10};

    printf("Sum = %d", sumArray(a, 5));

    return 0;
}

int sumArray(int a[], int size)
{
    int i;
    int sum = 0;

    for(i = 0; i < size; i++)
    {
        sum += a[i];
    }

    return sum;
}
