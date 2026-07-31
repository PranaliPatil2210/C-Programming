// Taking String Input

// User scanf()
#include<stdio.h>

int main()
{
    char name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Hello %s", name);

    return 0;
}

// scanf("%s") stops reading when it encounters a space, tab, or Enter. 
//Because %s treats whitespace as the end of the input.

#include<stdio.h>

int main(){
    chat name[20];

    printf("Enter name: ");
    scanf("%s",name);
    
    printf("Welcome %s", name);

    return 0;
}


#include<stdio.h>

int main(){
    chat city_name[20];
	
    printf("Enter your city name: ");
    scanf("%s",city_name);
	
    printf("You live in %s", city_name);

    return 0;
}


// Using fgets() 

// Syntax
// fgets(name, 20, stdin);
// name → where the string will be stored.
// 20 → maximum number of characters to read.
// stdin → read from the keyboard.

// Unlike scanf(), fgets() reads the entire line, including spaces.

include<stdio.h>

int main()
{
    char name[20];

    printf("Enter your full name: ");

    fgets(name, 20, stdin); 

    printf("Hello %s", name);

    return 0;
}

#include<stdio.h>

int main(){
    char college_name[60];
	
    printf("Enter full name: ");
    fgets(college_name, 60, stdin);
	
    printf("College Name: %s", college_name);

    return 0;
}
