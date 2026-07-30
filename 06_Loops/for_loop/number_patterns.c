// Print 1 to N

#include<stdio.h>

int main()
{
    int n;
    int i;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (i = 1; i<=n;i++)
    {
        printf("%d\n",i);
    }
	
    return 0;
}


// Print N to 1

#include<stdio.h>

int main()
{
    int n;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i<=n; n--)
    {
        printf("%d\n",n);
    }
	
    return 0;
}


// Print Even Numbers

#include<stdio.h>

int main()
{
    int n;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i=2; i<=n;  i += 2)
    {
        printf("%d\n",i);
    
    }
	
    return 0;
}


// Print Odd Numbers

#include<stdio.h>

int main()
{
    int n;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i=1; i<=n;  i += 2)
    {
        printf("%d\n",i);
    
    }
	
    return 0;
}


// Multiplication Table

#include<stdio.h>

int main()
{
    int n;
	
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 1; i<=10; i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        
    }
	
    return 0;
}
