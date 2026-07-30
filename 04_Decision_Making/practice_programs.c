// Grade Calculator (with input validation)

#include<stdio.h>

int main(){
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);

    if(marks <0 || marks>100){
        printf("Invalid Input");
    }
    else if (90 <= marks ){
        printf("Your Grade is A");
    }
    else if (75 <= marks){
        printf("Your Grade is B");
    }
    else if (60 <= marks ){
        printf("Your Grade is C");
    }
    else if (40 <= marks ){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
	
	return 0;
}


// Leap Year Checker

#include<stdio.h>
int main(){
    int year;
    printf("Enter year: ");
    scanf("%d",&year);
    
    if (year%400 == 0){
        printf("Leap Year");
    }
    else if (year%100 == 0){
        printf("Not Leap Year");
    }
    else if (year%4 == 0){
        printf("Leap Year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;
}


// Simple Calculator
#include<stdio.h>
int main(){
    int num1, num2;
    char operator;
    printf("Enter 1st no.: ");
    scanf("%d", &num1);
    printf("Enter 2nd no.: ");
    scanf("%d", &num2);
    printf("Enter the no. of the operation you want to perform: ");
    scanf(" %c", &operator);

    if (operator == '+'){
        printf("Addition is: %d\n", num1+num2);
    }
    else if (operator == '-'){
        printf("Subtraction is: %d\n", num1-num2);
    }
    else if (operator == '*'){
        printf("Multiplication is: %d\n", num1*num2);
    }
    else if (operator == '/'){
        if (num2 == 0){
            printf("Division by 0 is not allowed. \n");
        }
        else{
        printf("Division is: %d\n", (float)num1/num2);
        }
    }
    else{
        printf("Invalid Input");
    }
    return 0;
}


