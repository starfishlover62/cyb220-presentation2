#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Goal is to have dangling pointer example 
  May also have example about using an uninitialized pointer */

// Fills the array with random integers from 0-9
int* generateRandomData(int num_elements){
  if(num_elements <= 0){
    return NULL;
  }
  int array[num_elements];
  for(int i = 0; i < num_elements; ++i){
    array[i] = random() % 10; // Fills array with a random number 0-9
  }
  return array;
}

// Prints out an array of integers
void printArray(int* array, int num_elements){
  for(int i = 0; i < num_elements; ++i){
    printf("%d",array[i]);
    if(i != 0 && (i%5 == 0)){
      printf("\n");
    } else {
      printf(" ");
    }
  }
}


int main() {
  srandom(time(NULL));
  int num_elements = 10;
  int* data = generateRandomData(num_elements);
  printArray(data,num_elements);
  return 0;
}
