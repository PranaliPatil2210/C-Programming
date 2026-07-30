// Loop - A loop is a structure that repeats a block of code until a condition becomes false.
// while Loop - Use when you don't know how many times the loop will execute.
// Syntax
// while(condition)
// {
//     // statements
// }

// Print 1 to 5 
#include <stdio.h>

int main()
{
    int i = 1;
    while(i <= 5)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}


// Infinite loop due to semicolon
#include <stdio.h>

int main(){
	int i = 1;

	while(i <= 5);
	{
		printf("Hello");
	}
	
	return 0;
}
// Because of the semicolon, the while loop has an empty body. 
// Since i is never incremented, i <= 5 is always true, resulting in an infinite empty loop. 
// The printf("Hello"); statement is never executed.






















