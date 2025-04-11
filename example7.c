#include <stdio.h>
#include <stdlib.h>


int main() {
    char* ptr = malloc(2);
    ptr[0] = 'a';
    ptr[1] = '\0';
    free(ptr);
    ptr[0] = 'b';
    return 0;
}