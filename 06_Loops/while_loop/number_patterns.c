// Print 1 to N

#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\n",i);
        i++;
    }
    return 0;
}

// Print N to 1

#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\n",n);
        n--;
    }
    return 0;
}


// Print Even Numbers

#include<stdio.h>

int main()
{
    int n;
    int i = 2;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        printf("%d\n",i);
        i += 2 ;
    }
    return 0;
}


// Print Odd Numbers

#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=n)
    {
        if (i%2 != 0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}


// Multiplication Table

#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    printf("Enter a number: ");
    scanf("%d",&n);

    while (i<=10)
    {
        printf("%d x %d = %d\n",n,i,n*i);
        i++ ;
    }
    return 0;
}



