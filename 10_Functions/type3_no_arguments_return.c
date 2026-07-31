// Return 10

#include<stdio.h>

int number();

int main()
{
    int x;
    x = number();
    printf("%d", x);    // output 10
    return 0;
}

int number()
{
    return 10;
}


// Return Square

#include<stdio.h>

int square();

int main()
{
    int ans;
    ans = square();
    printf("Square = %d", ans);
    return 0;
}

int square()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n * n;
}


// Return Sum

#include<stdio.h>

int sum();

int main()
{
    int total;
    total = sum();
    printf("%d", total);
    return 0;
}

int sum()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    return a + b;
}

// Return 100

#include<stdio.h>

int value(){
    return 100;
}

int main()
{
    printf("%d", value());
    return 0;
}


// Return Cube

#include<stdio.h>

int cube(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    return n * n * n;
}

int main(){
    printf("cube is %d",  cube());
    return 0;
}















