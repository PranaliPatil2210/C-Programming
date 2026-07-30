// Increasing Star Triangle

#include<stdio.h>

int main(){
	
	int i,j;

	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}

		printf("\n");
	}
	
	return 0;
}


// Decreasing Star Triangle

#include<stdio.h>

int main(){
	
	int i,j;

	for(i = 4; i >= 1; i--)
	{
		for(j = 1; j <= i; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}


// Square Pattern

#include<stdio.h>

int main(){
	
	int i,j;

	for (i = 1; i <=4; i++){
		for(j = 1; j <= 4; j++){
			printf("* ");
		}
		printf("\n")
	}
	
	return 0;
}


// Right-Aligned Triangle

#include <stdio.h>
int main(){
    int i, j;
    for (i = 1; i<=4; i++)
    {

        //Print spaces
        for(j = 1; j <= 4-1; j++){
            printf(" ");
        }

        //print stars
        for (j = 1; j<=i; j++){
            printf("* ");
        }

        printf("\n");
    }
    return 0;
}
