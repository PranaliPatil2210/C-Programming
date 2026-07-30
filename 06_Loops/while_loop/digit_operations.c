
// Sum of Digits, Count Digits, Reverse a Number, Palindrome Number Program

#include<stdio.h>

int main()
{
    int n;
    int digit_count = 0;
    int sum = 0;
    int digit;
    int reverse_n = 0;
	
    printf("Enter a number: ");
    scanf("%d",&n);
	
    int original = n;

   if(n == 0)
{
    digit_count = 1;
    sum = 0;
}
else
{
    while(n != 0)
    {
        digit = n%10;
        reverse_n = (reverse_n*10) + digit;
        sum = sum + digit;
        n /= 10;
        digit_count++;
    }
}
    if (reverse_n == original)
{
    printf("%d is palindrome.\n",original);
}

    printf("The sum of digits is : %d\n", sum);
	
    printf("%d digits\n",digit_count);
	
    printf("reverse of %d is: %d\n", original, reverse_n);
	
    return 0;
}

