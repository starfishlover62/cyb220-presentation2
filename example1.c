#include <stdio.h>
#include <stdlib.h>
int main() {
	int* data = malloc(sizeof(int)*10);
  free(data);
return 0;
}
