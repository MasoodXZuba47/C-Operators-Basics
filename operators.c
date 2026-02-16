#include <stdio.h>

int main()
{
    // Arithmetic operators 
    int x = 10;
    int y = 3;

    printf("%d\n", x + y);
    printf("%d\n", x - y);
    printf("%d\n", x * y);
    printf("%d\n", x / y);
    printf("%d\n", x % y);

    int z = 5;
    ++z;
    printf("%d\n", z);
    --z;
    printf("%d\n", z);


    // Assignment operators
    int a = 10;

    a += 5;
    a -= 3;
    a *= 2;
    a /= 4;
    a %= 4;

    a &= 3;
    a |= 1;
    a ^= 2;

    a <<= 2;
    a >>= 1;

    printf("ANSWER FOR ASSIGNMENT OPERATORS %d\n", a);


    // Comparison operators
    int b = 10;
    int c = 5;

    printf("b == c : %d\n", b == c);
    printf("b != c : %d\n", b != c);
    printf("b > c  : %d\n", b > c);
    printf("b < c  : %d\n", b < c);
    printf("b >= c : %d\n", b >= c);
    printf("b <= c : %d\n", b <= c);


    // Logical operators
    int isLoggedIn = 1;
    int isAdmin = 0;

    printf("Regular user: %d\n", isLoggedIn && !isAdmin);
    printf("Has access: %d\n", isLoggedIn || isAdmin);
    printf("Not logged in: %d\n", !isLoggedIn);

    return 0;   //  Only ONE return at the end
}
