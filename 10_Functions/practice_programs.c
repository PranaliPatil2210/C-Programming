// Return the cube.

#include<stdio.h>

int cube(int);

int main(){
    int x;
    x = cube(6);
    printf("The cube is %d", x);
    return 0;
}

int cube(int n){
    return n*n*n;
}


// Return the factorial.

#include<stdio.h>

int factorial(int);

int main(){
    int x;
    x = factorial(5);
    printf("The factoarial is %d", x);
    return 0;
}

int factorial(int n){
    int i = 1;
    int fact = 1;
    for (i = 1; i <= n; i++){
        fact*=i;
    }
    return fact;
}
    

// Return the larger numberfrom user input

#include<stdio.h>

int largest(int, int);

int main(){
    int a, b, x;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d", &b);
    x = largest(a,b);
    printf("The largest no. is %d", x);
    return 0;
}

int largest(int a, int b){
    if (a>b){
        return a;
    }
    else{
        return b;
    }
}

