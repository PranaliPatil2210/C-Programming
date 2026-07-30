// Simple Calculator using Switch

#include<stdio.h>

int main(){
    int num1, num2;
    char operator;
	
    printf("Enter 1st no.: ");
    scanf("%d", &num1);
	
    printf("Enter 2nd no.: ");
    scanf("%d", &num2);
	
    printf("Enter the operator of operation you want to perform: ");
    scanf(" %c", &operator);
	
    switch(operator)
    {
        case '+':
            printf("Addition is: %d\n", num1+num2);
            break;

       case '-':
            printf("Subtraction is: %d\n", num1-num2);
            break;

        case '*':
            printf("Multiplication is: %d\n", num1*num2);
            break;

        case '/':
            if(num2 == 0){
                printf("Division by zero is not allowed.");
            }
            else{
                printf("Division is: %d", (float)num1/num2);
            }
            break;
        
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}