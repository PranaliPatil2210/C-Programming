#include<stdio.h>

void hello();      // ① Function Declaration (Prototype)

int main()
{
    hello();       // ② Function Call

    return 0;
}

void hello()       // ③ Function Definition
{
    printf("Hello Partner!");
}


#include<stdio.h>

void hello()
{
    printf("Hello");
}

int main()
{
    hello();
}
// No prototype needed because the function is defined before main().

