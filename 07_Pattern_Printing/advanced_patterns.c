// Full Pyramid

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        // Print spaces
        for(j = 1; j <= 4 - i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


// Inverted Pyramid

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        // Print spaces
        for(j = 1; j < i; j++)
        {
            printf(" ");
        }

        // Print stars
        for(j = 1; j <= 2 * (5 - i) - 1; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}


// Hollow Square

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 4; j++)
        {
            if(i == 1 || i == 4 || j == 1 || j == 4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}


// Hollow Rectangle

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 6; j++)
        {
            if(i == 1 || i == 4 || j == 1 || j == 6)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}