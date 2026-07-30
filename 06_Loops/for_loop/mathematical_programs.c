// Sum of First N Numbers

#include<stdio.h>

int main()
{
    int n;
    int sum = 0;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i<=n;  i++)
    {
        sum += i;
        
    }
	
    printf("Addition is: %d\n",sum);
	
    return 0;
}


// Factorial

#include<stdio.h>

int main()
{
    int n;
    int fact = 1;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i<=n; i++)
    {
        fact*=i;
       
    }
	
    printf("%d! = %d\n",n, fact);
	
    return 0;
}
