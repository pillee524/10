#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char str[30] = "happy C programming";

    printf("string \"%s\" length %i\n", str, (int)strlen(str));
    return 0;
}