#include <stdio.h>
/*
  Needs to be improved. String search example might be nice. It should be fairly complex
  Probably should be within its own function, called from main.
*/

int main() {
	int i = 0;
	int array[10];
	for(;i < 10; ++i){
		array[i] = i; 
}
printf("final value: %d\n",array[i]); // i=10 at this point, causing OOB array access.
return 0;
}
