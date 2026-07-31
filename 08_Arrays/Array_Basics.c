// Array - An array stores multiple values of the same data type using one variable name.
// Syntax 
// datatype array_name[size];

#include<stdio.h>

int main(){
    int number[5];

    number[0] = 10;
    number[1] = 20;
    number[2] = 30;
    number[3] = 40;
    number[4] = 50;

    printf("%d\n", number[0]);
    printf("%d\n", number[1]);
    printf("%d\n", number[2]);
    printf("%d\n", number[3]);
    printf("%d\n", number[4]);

    return 0;
}



#include<stdio.h>
int main(){
    int fav_number[4];

    fav_number[0] = 22;
    fav_number[1] = 29;
    fav_number[2] = 4;
    fav_number[3] = 5;
   

    printf("%d\n", fav_number[0]);
    printf("%d\n", fav_number[3]);
   
   
    return 0;
}



#include<stdio.h>

int main(){
    int numbers[6];

    numbers[0] = 101;
    numbers[1] = 201;
    numbers[2] = 301;
    numbers[3] = 401;
    numbers[4] = 501;
    numbers[5] = 505;

    
    printf("%d", numbers[3]);
    
    return 0;
}













