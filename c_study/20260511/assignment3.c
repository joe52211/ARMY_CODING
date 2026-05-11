#include <stdio.h>

void add_ten(int* arr, int size);

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    add_ten(a, 5);
    for(int i = 0; i < 5; i++){
       printf("%d\n", a[i]);
    }
    return 0;
}

void add_ten(int* arr, int size){
    for(int i = 0; i<size; i++){
        *(arr+i) += 10;
    }
}

// gpt 값 전달 vs 주소 전달 + 메모리 구조 과제3
// 배열에 각각 10 더해보기