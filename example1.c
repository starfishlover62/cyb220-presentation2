#include <stdio.h>
#include <stdlib.h>
int main() {
	int* data = malloc(sizeof(int)*10); // No checks for malloc being successful
  free(data);
return 0;
}
