#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    int a = 5, b = 6, x = 4, y = 8, z = 2;
    printf("Złożone operatory przypisania\n");
    printf("\n1. x=%d y=%d", x *= y, y);
    printf("\n2. y=%d z=%d", y -= z + 1, z);
    printf("\n3. a=%d b=%d", a /= b, b);
    x = y = 8;
    printf("\n4. x=%d y=%d", x += y / 8, y);
    printf("\n5. y=%d", y %= 3);
    x = 12;
    z = x += 2;
    printf("\n6. x=%d z=%d\n", x, z);
    x = 13;
    z = x <<= 2;
    printf("\n7. x=%d z=%d\n", x, z);
    x = 13;
    z = x >>= 2;
    printf("\n8. x=%d z=%d\n", x, z);
    x = 5;
    z = x |= 2;
    printf("\n9. x=%d z=%d\n", x, z);
    x = 6;
    z = x &= 5;
    printf("\n10. x=%d z=%d\n", x, z);
    x = 5;
    z = x ^= 7;
    printf("\n11. x=%d z=%d\n", x, z);
    fflush(stdin);
    printf("Naciśnij Enter, aby zakończyć...");
    getchar();
    return 0;
}