// Increment (++)- Increase the value of a variable by 1.
// a++; ++a;
// Post Increment - Use the value first, then increase it.

#include <stdio.h>

int main()
{
    int a = 10;
    a++;
    printf("%d", a);
    return 0;
}

// Pre Increment - Increase first, then use the value.

#include <stdio.h>

int main()
{
    int a = 10;
    ++a;
    printf("%d", a);
    return 0;
}

// Decrement (--) - Decrease the value by 1.
// Post Decrement- Use first, then decrease. 
// a--;

int a = 10;
printf("%d\n", a--);
printf("%d", a);

// Pre Decrement - Decrease first, then use. --a;

int a = 10;
printf("%d\n", --a);
printf("%d", a);