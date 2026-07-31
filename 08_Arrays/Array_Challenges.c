#include<stdio.h>

int main(){
    int i;
    int a[10];
    int even = 0;
    int odd = 0;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++){
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 10; i++){
        if(a[i]%2 == 0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("Even = %d\n", even);
    printf("Odd = %d", odd);

    return 0;
}


#include<stdio.h>

int main()
{
    int a[8];
    int i;
    int max, second;

    printf("Enter 8 numbers:\n");

    for(i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
    }

    max = a[0];
    second = a[1];

    // Ensure max is actually larger than second
    if(second > max)
    {
        int temp = max;
        max = second;
        second = temp;
    }

    for(i = 2; i < 8; i++)
    {
        if(a[i] > max)
        {
            second = max;
            max = a[i];
        }
        else if(a[i] > second)
        {
            second = a[i];
        }
    }

    printf("Second Largest = %d", second);

    return 0;
}


#include<stdio.h>

int main()
{
    int a[6];
    int i;
    int sorted = 1;

    printf("Enter 6 numbers:\n");

    for(i = 0; i < 6; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < 5; i++)
    {
        if(a[i] > a[i+1])
        {
            sorted = 0;
            break;
        }
    }

    if(sorted)
    {
        printf("Array is sorted");
    }
    else
    {
        printf("Array is not sorted");
    }

    return 0;
}
