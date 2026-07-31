// Arrays with Loops

// Input Using a Loop

#include<stdio.h>

int main(){
    int a[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }
    return 0;
}


// Printing an Array

#include<stdio.h>

int main()
{
    int a[5];
    int i;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array elements are:\n");

    for(i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}


#include<stdio.h>
int main(){
    int a[5];
	
    printf("Enter 5 numbers:\n");
	
    for(int i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    printf("The elements of array a are: \n");
	
    for(int i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }
	
    return 0;
}

