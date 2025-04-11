#include <stdio.h>

int recursive_fibonacci(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return(recursive_fibonacci(n) + recursive_fibonacci(n-1));
}


int main() {
    int num = recursive_fibonacci(10);
    printf("10th element of fibonacci: %d\n",num);
    return 0;
}