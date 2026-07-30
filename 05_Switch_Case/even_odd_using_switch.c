#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num % 2){
        case 0:
            printf("Even");
            break;

        case 1:
        case -1:  // Handles negative odd numbers too
            printf("Odd");
            break;
}

    return 0;
}

