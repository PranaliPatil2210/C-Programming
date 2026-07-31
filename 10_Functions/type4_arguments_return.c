// Adding Two Numbers

#include<stdio.h>

int add(int, int);

int main()
{
    int ans;
    ans = add(5, 7);
    printf("%d", ans);
    return 0;
}

int add(int a, int b)
{
    return a + b;
}


// Return Square of a number.

#include<stdio.h>

int square(int n);

int main(){
    int ans;
    ans = square(8);
    printf("%d", ans);
    return 0;
}

int square(int n){
    return n*n;
}


// Return Larger Numbers

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


// Return Even/Odd

#include<stdio.h>

int evenOdd(int);

int main(){
    if(evenOdd(10)){
        printf("Even");
    else{
        printf("Odd");
    }
    return 0;
    }
}

int evenOdd(int n){
    if(n%2==0){
         return 1;
        
    return 0;
    }
}


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
    

// Return the larger numberfrom user input.

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
















