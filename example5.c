#include <stdio.h>

void loop(int array[10]) {
    int i = 0;
    while(1){
        printf("%d\n",array[i]);
        ++i;
    }
}


int main() {
    int array[] = {1,2,3,4,5,6,7,8,9,0};
    loop(array);
    return 0;
}