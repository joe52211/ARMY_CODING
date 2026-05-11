#include <stdio.h>

int sum(int* arr, int size);
void print_array(int* arr, int size);
void double_array(int* arr, int size);

int main(){
    int arr[5];
    int size = 5;
    printf("더할 arr: ");
    for (int i = 0; i < size; i++){
        int a;
        scanf("%d", &a);
        *(arr+i) = a;
    }
    printf("배열합: %d\n", sum(arr, size));

    printf("arr출력하기: ");
    for (int i = 0; i < size; i++){
        int a;
        scanf("%d", &a);
        *(arr+i) = a;
    }
    print_array(arr, size);
    
    double_array(arr, size);
    printf("2배 ");
    print_array(arr,size);
    return 0;
}

int sum(int* arr, int size){
    for (int i = 1; i < size; i++){
        arr[0] += *(arr+i);
    }
    return arr[0];
}

void print_array(int* arr, int size){
    printf("배열 출력: ");
    for(int i = 0; i < size; i++){
        printf("%d ", *(arr+i));
    }
    printf("\n");
}

void double_array(int* arr, int size){
    for(int i = 0; i<size; i++){
        *(arr+i)+=*(arr+i);
    }
}

/*
피드백
“원본 데이터를 언제 수정해야 하는가”를 구분하는 습관이 필요하다.
읽기용 함수 → 원본 수정 금지
수정 함수 → 명확하게 변경
수정 예시->
int sum(int* arr, int size){
    int s = 0;

    for (int i = 0; i < size; i++){
        s += *(arr + i);
    }

    return s;
}

*(arr + i) *= 2;로 가독성 향상 가능


*/