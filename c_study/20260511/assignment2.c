#include <stdio.h>

void change(int *x);

int main(){
    int a = 10;
    change(&a);
    printf("%d\n", a);

    return 0;
}

void change(int *x){
    *x = 20;
}

// gpt 값 전달 vs 주소 전달 + 메모리 구조 과제2
// 포인터로 전달해 진짜 변경하기