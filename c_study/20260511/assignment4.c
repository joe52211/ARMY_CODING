#include <stdio.h>

void add_ten(int* arr, int size);
void print_array(const int* arr, int size);

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    add_ten(a, 5);
    print_array(a, 5);    
    return 0;
}

void add_ten(int* arr, int size){
    for(int i = 0; i<size; i++){
        *(arr+i) += 10;
    }
}

void print_array(const int* arr, int size){
    for(int i = 0; i < size; i++){
       printf("%d\n", arr[i]);
    }
}

// gpt 값 전달 vs 주소 전달 + 메모리 구조 과제3
// 읽기 전용 함수 만들기