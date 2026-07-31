// String Algorithms

// Reverse a String

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    // Remove newline character
    if(str[len-1] == '\n')
    {
        str[len-1] = '\0';
        len--;
    }

    printf("Reversed String: ");

    for(i = len-1; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}


// Count Vowels

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||
           str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
        {
            count++;
        }
    }

    printf("Number of vowels = %d", count);

    return 0;
}


// Palindrome String

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i, len, flag = 1;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    len = strlen(str);

    if(str[len-1] == '\n')
    {
        str[len-1] = '\0';
        len--;
    }

    for(i = 0; i < len/2; i++)
    {
        if(str[i] != str[len-1-i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("Palindrome");
    else
        printf("Not Palindrome");

    return 0;
}


// Count Words

#include<stdio.h>

int main()
{
    char str[100];
    int i;
    int upper = 0, lower = 0;

    printf("Enter a string: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
    }

    printf("Uppercase letters = %d\n", upper);
    printf("Lowercase letters = %d\n", lower);

    return 0;
}


// Count Uppercase and Lowercase

#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];
    int i;
    int words = 1;

    printf("Enter a sentence: ");
    fgets(str, 100, stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            words++;
        }
    }

    printf("Number of words = %d", words);

    return 0;
}
