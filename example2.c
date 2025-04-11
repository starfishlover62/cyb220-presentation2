#include <stdio.h>
#include <stdlib.h>


int main() {
    int* data;
    data = malloc(sizeof(int) * 10);
    printf("%d",data[1]);
	free(data);
    return 0;
}
