#include <stdio.h>
#include <stdlib.h>
int main() {
  int* data;
	if((data = malloc(sizeof(int)*10)) == 0){ // No longer an issue. Checks if malloc was successful
    exit(EXIT_FAILURE);
  }
	free(data);
	free(data);
return 0;
}
