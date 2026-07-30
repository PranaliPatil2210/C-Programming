// Increasing Number Triangle

#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 4; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
    return 0;
}


// Repeating Number Triangle

#include<stdio.h>
int main()
{
    int i, j;
    for(i = 1; i <= 4; i++)
	{
		for(j = 1; j <= i; j++)
		{
			printf("%d ", i);
		}
		printf("\n");
	}
    return 0;
}


// Inverted Number Triangle

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= 5 - i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


// Reverse Number Triangle

#include<stdio.h>

int main()
{
    int i, j;

    for(i = 1; i <= 4; i++)
    {
        for(j = 4; j >= 5 - i; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}


// Floyd's Triangle

#include<stdio.h>

int main()
{
    int i, j;
    int num = 1;

    for(i = 1; i <= 4; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
