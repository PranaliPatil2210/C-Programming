// Sum of First N Numbers

#include<stdio.h>

int main()
{
    int n;
    int i = 0;
    int sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        sum += i;
        i++;
    }
    printf("Addition is: %d\n",sum);
    return 0;
}


// Factorial of a Number

#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    int fact = 1;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        fact*=i;
        i++;
    }
    printf("%d! = %d\n",n, fact);
    return 0;
}


