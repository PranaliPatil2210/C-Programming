// String Library Functions

// Whenever we use string functions like:
// strlen()
// strcpy()
// strcmp()
// strcat()
// we include:
// #include <string.h>


// strlen() (String Length)

// Syntax
// #include <string.h>
// int length = strlen(name);

#include<stdio.h>
#include<string.h>

int main()
{
    char name[] = "Pranali";

    printf("%d", strlen(name));

    return 0;
}


#include<stdio.h>
#include <string.h>

int main(){
    char name[60];
	
    printf("Enter your name: ");
    fgets(name, 60, stdin);
	
    printf("Lenght: %d", strlen(name));

    return 0;
}


/ strcpy() (String Copy)

// Syntax
// strcpy(destination, source);

// It copies the source string into the destination string.

#include<stdio.h>
#include<string.h>

int main()
{
    char source[] = "Pranali";
    char destination[20];

    strcpy(destination, source);

    printf("%s", destination);

    return 0;
}


#include<stdio.h>
#include<string.h>

int main(){
    char original[15] = "Electronics";
    char copied[30];

    strcpy(copied, original);
    printf("%s", copied);

    return 0;
	
}

// strcat() (String Concatenate)
// Concatenate means join two strings.

// Syntax
// strcat(first, second);
// It appends the second string to the end of the first.

#include<stdio.h>
#include<string.h>

int main()
{
    char first[30] = "Hello ";
    char second[] = "Partner";

    strcat(first, second);

    printf("%s", first);

    return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
    char good[20] = "Good ";
    char morning[10] = "Morning";

    strcat(good, morning);
    printf("%s", good);

    return 0;
}


// strcmp() (String Compare)

// Used to compare two strings.

// Syntax
// strcmp(string1, string2)

// Output
// 0  -> Equal
// <0 -> First string is smaller
// >0 -> First string is larger

#include<stdio.h>
#include<string.h>

int main(){
    char string1[20];
    char string2[20];
    int a;

    printf("Enter first string: ");
    fgets(string1, 20, stdin);

    printf("Enter second string: ");
    fgets(string2, 20, stdin);

    a = strcmp(string1, string2);

    if(a == 0){
        printf("Strings are equal");
    }
    else{
        printf("Strings are different");
    }

    return 0;
}



