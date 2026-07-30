// Nested Loop - A loop inside another loop is called a nested loop.
// The outer loop is often called the parent loop, and the inner loop is the child loop.
// for(...)
// {
//     for(...)
//     {
//         // statements
//     }
// }

#include<stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 3; i++){
        for (j = 1; j <= 2; j++){
            printf("(%d,%d) ",i,j);
        }
		
        printf("\n");
    }
	
    return 0;
}

// For every one iteration of the outer loop, the inner loop executes completely.


#include<stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=2;i++)
	{
		for(j=1;j<=4;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
	
    return 0;
}


#include<stdio.h>

int main()
{
    int i, j;
    for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	
    return 0;
}
