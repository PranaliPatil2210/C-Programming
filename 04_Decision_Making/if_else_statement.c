// Voting eligibility

#include <stdio.h>

int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
	
    if(age >= 18)
    {
        printf("Eligible for voting");
    }
    else
    {
        printf("Not eligible for voting");
    }
	
    return 0;
}

// Positive/Negative

#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 1st no.: ");
    scanf("%d", &num1);
    printf("Enter 2nd no.: ");
    scanf("%d", &num2);

    if (num1 > 0) {
        printf("no. is positive\n");
    }
    else{
        printf("no. is negative or equal\n");
    }
	
	return 0;
}


// Even/Odd

#include<stdio.h>
int main()
{
    int num1;
    printf("Enter 1st no.: ");
    scanf("%d", &num1);
	
	 if (num1%2 == 0){
        printf("no. is even\n");
    }
    else{
        printf("no. is odd\n");
    }
	
	return 0;
}


// Greater Number

#include<stdio.h>

int main()
{
    int num1, num2;
    printf("Enter 1st no.: ");
    scanf("%d", &num1);
    printf("Enter 2nd no.: ");
    scanf("%d", &num2);
	
	if (num1 > num2) {
        printf("1st no. is greater\n");
    }
    else{
        printf("2nd no. is greater\n");
    }
	
	return 0;
}


















