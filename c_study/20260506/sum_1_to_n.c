#include <stdio.h>

// sum 함수의 본연 기능 충실, 쓸대없이 포인터로 함수를 복잡하게 하지 않음
int sum (int n){
    int s = 0;
    for (int i = 1; i <= n; i++){
        s+=i;
    }
    return s;
}

// 최대한 간결하게, 주요 명령 위주로 코딩
int main (){
    int n;
    printf("n을 입력하시오: ");
    scanf("%d", &n);
    printf("%d\n", sum(n));
    return 0;
}