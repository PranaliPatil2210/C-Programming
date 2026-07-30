// for Loop 

// Syntax

// for(initialization; condition; update)
// {
//     // statements
// }

// Initialization - Runs only once.
// int i = 1;

// Condition - Runs before every iteration.
// i <= 10

// Update - Runs after every iteration.
// i++

// Print 1 to 5

#include<stdio.h>

int main(){
	for(int i = 1; i <= 5; i++)
	{
		printf("%d ", i);
	}
	
	return 0;
}