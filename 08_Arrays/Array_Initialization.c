// Array Initialization
// Method 1
int a[5] = {10, 20, 30, 40, 50};

// Method 2 (Compiler Counts the Size)
int a[] = {10, 20, 30, 40, 50};

// Method 3 (Partial Initialization)
int a[5] = {10,20};
// The remaining elements are automatically initialized to 0.

// Method 4 (All Zeros)
int a[5] = {0};

#include<stdio.h>
int main(){

    int i;
    int a[] = {2,4,6,8,10};

    for(i = 0; i < 5; i++){
        printf("%d ", a[i]);
    }

    return 0;
}


#include<stdio.h>
int main(){

    int i;
    int a[6] = {5,10,15};

    for(i = 0; i < 6; i++){
        printf("%d ", a[i]);
    }

    return 0;
}
