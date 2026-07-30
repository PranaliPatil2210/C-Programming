#include<stdio.h>
int main()
{
    int n;
    int digit_count = 0;
    int sum = 0;
    int digit;
    int reverse_n = 0;
    int cube = 0;
	
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
		for (;n != 0;digit_count++)
		{
			digit = n%10;
			reverse_n = (reverse_n*10) + digit;
			cube = cube + digit*digit*digit;
			sum = sum + digit;
			n /= 10;
        
		}
	}
    if (reverse_n == original)
    {
        printf("%d is palindrome.\n",original);
    }
    else{
        printf("%d is not palindrome.\n",original);
    }
    if (cube == original)
    {
        printf("%d is armstrong no.\n",original);
    }
    else{
        printf("%d is not armstrong no.\n",original);
    }

    printf("The sum of digits is : %d\n", sum);
    printf("%d digits\n",digit_count);
    printf("reverse of %d is: %d\n", original, reverse_n);
    return 0;
}

