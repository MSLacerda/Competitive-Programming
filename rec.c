#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "12345678901234567890123456789012";
    long int a = (strlen(text) & ~15) + 16;

    printf("%ld", a);
    return 0;
}