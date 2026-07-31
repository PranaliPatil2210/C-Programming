// Example 1
#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int key;

    printf("Enter 5 numbers:\n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            printf("Found");
            break; //Without break, the loop would continue checking the remaining elements even though we already found the answer.
        }
    }

    if(i == 5)
    {
        printf("Not Found");
    }

    return 0;
}

// Example 2 – Print Position

#include<stdio.h>

int main()
{
    int a[5];
    int i;
    int key;

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter number to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(a[i] == key)
        {
            printf("Found at index %d", i);
            break;
        }
    }

    if(i == 5)
    {
        printf("Not Found");
    }

    return 0;
}

// Another Version (Using a Flag)
// Instead of checking i == 5, we can use a flag.
#include<stdio.h>

int main(){

    int found = 0;

    for(i = 0; i < 5; i++){
        if(a[i] == key){
            found = 1;
            break;
        }
    }

    if(found){
        printf("Found");
    }
    else{
        printf("Not Found");
    }

    return 0;
}


#include<stdio.h>

int main(){
    int i;
    int b;
    int a[5];
    int found = 0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter a number you want to check presence of: ");
    scanf("%d", &b);

    for(i = 0; i < 5; i++){
        if(a[i] == b){
            found = 1;
            break;
        }
    }

    if(found){
        printf("Found element at index: %d", i);
    }
    else{
        printf("Not Found");
    }

    return 0;
}


#include<stdio.h>

int main(){
    int i;
    int b;
    int a[5];
    int count = 0;
    printf("Enter 5 numbers:\n");
    for(i = 0; i < 5; i++){
        scanf("%d", &a[i]);
    }

    printf("Enter a number you want to count: ");
    scanf("%d", &b);

    for(i = 0; i < 5; i++){
        if(a[i] == b){
            count+=1;
        }
    }

    printf("%d appears %d times", b, count);

    return 0;
}