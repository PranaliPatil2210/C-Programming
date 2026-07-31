// Program 1 – Print in Reverse

#include<stdio.h>

int main()
{
    int a[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Reverse order:\n");

    for(i = 4; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int temp;
    int start = 0;
    int end = 4;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    while(start < end)
    {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }

    printf("Reversed array:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
