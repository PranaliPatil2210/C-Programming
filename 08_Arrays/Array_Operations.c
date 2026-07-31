// Sum of Array Elements
#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int sum = 0;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }

    printf("Sum = %d", sum);

    return 0;
}


// Average

#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int sum = 0;
    float avg;

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        sum += a[i];
    }

    avg = sum / 5.0;

    printf("Average = %.2f", avg);

    return 0;
}


// Find Largest Element

#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int max;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    max = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] > max)  // Because max = a[0]; already stores the first element. There's no need to compare it with itself.
        {
            max = a[i];
        }
    }

    printf("Largest = %d", max);

    return 0;
}

// Find Smallest Element

#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int min;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    min = a[0];

    for(i = 1; i < 5; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }

    printf("Smallest = %d", min);

    return 0;
}
