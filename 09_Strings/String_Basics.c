/ Ways to Create a String
// Method 1
char name[] = "Pranali";
// The compiler automatically adds \0.

// Memory looks like this:
// Index	0	1	2	3	4	5	6	7
// Value	P	r	a	n	a	l	i	\0
// Notice the last character:
// \0
// This is called the null character.

// Method 2
char name[8] = "Pranali";
// Also correct.

// Method 3
char name[] = {'P','r','a','n','a','l','i','\0'};
// This is exactly how C stores the string internally.

// Printing a String

// Instead of:
// printf("%c", name[0]);
// printf("%c", name[1]);

// we simply write:
// printf("%s", name);

// Here:
// %c → one character
// %s → whole string

#include<stdio.h>

int main(){
    char name[] = "Shreya";

    printf("%s", name);

    return 0;
}
