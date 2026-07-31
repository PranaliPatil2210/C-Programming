#include<stdio.h>

void name();
int main()
{
    name();

	return 0;
}

void name()
{
    printf("My name is Pranali\n");
}



#include<stdio.h>

void c_program();

int main()
{
    c_program();

    return 0;
}

void c_program()
{
    printf("Welcome to C programming\n");
}



#include<stdio.h>

void print_number();
int main()
{
    print_number();

    return 0;
}


void print_number()
{
    int i;
    for(i = 1; i <= 10; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
}
