// Print Number 

#include<stdio.h>

void printNumber(int n);

int main()
{
    printNumber(25);
    return 0;
}

void printNumber(int n)
{
    printf("%d", n);
}

// Print Square 

#include<stdio.h>

void square(int);

int main()
{
    square(6);
    return 0;
}

void square(int n)
{
    printf("%d", n*n);
}


// Larger Number

#include<stdio.h>

int maximum(int, int);

int main(){
    int ans;
    ans = maximum(25,18);
    printf("Largest = %d", ans);
    return 0;
}

int maximum(int a, int b){
    if(a>b)
        return a;

    return b;
}


// Print if the number is even or odd

#include<stdio.h>

void even_odd(int);

int main()
{
    even_odd(6);
    return 0;
}

void even_odd(int a)
{
    if(a%2==0){
        printf("%d is even", a);
    }
    else
    {
        printf("%d is odd", a);
    }
}