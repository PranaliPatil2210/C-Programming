// Ternary Operator (?:)
// Syntax - (condition) ? expression_if_true : expression_if_false;
(age >= 18) ? printf("Eligible") : printf("Not Eligible");

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    (num % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}
