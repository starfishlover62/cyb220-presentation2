#include <stdio.h>
#include <stdlib.h>

void useData(int** data, int size){
    for(int i = 0; i < size; ++i){
        (*data)[i] = i;
        printf("%d\n",(*data)[i]);
    }
    free(*data);
}


int main() {
	int* data = malloc(sizeof(int)*10); // No checks for malloc being successful
    useData(&data,10);
    data[5] = 47;
    printf("%d\n",data[5]);
    free(data); // Double free
    return 0;
}
