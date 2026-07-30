// Positive/Negative/Zero

#include<stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    if(num > 0)
    {
        printf("Positive");
    }
    else if(num < 0)
    {
        printf("Negative");
    }
    else
    {
        printf("Zero");
    }
    return 0;
}


// Grade Calculator

#include<stdio.h>

int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
	
	if(marks >= 90)
	{
		printf("Grade A");
	}
	else if(marks >= 75)
	{
		printf("Grade B");
	}
	else if(marks >= 60)
	{
		printf("Grade C");
	}
	else if(marks >= 40)
	{
		printf("Pass");
	}
	else
	{
		printf("Fail");
	}
	
	 return 0;
}




