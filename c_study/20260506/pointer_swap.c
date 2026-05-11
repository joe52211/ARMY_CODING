#include <stdio.h>

void swap(int* x, int* y){
    // if (x == NULL || y == NULL) return; 포인터 유효성체크
    // int temp = *x;로 축약 가능
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

int main(){
    int a = 10, b = 20;
    swap(&a, &b);
    printf("%d, %d\n", a, b);
    return 0;
}