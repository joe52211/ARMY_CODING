#include <stdio.h>

int main (){
    int arr[5];
    int max;
    printf("배열을 입력하시오(a b c d e): ");
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]); //&붙이는거 잊지말기
    /* 반복문 형식으로 입력받는 방법도 있음(추천)
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }
    */
    max = arr[0];
    for (int i = 1; i < 5; i++){ // max는 arr[0]으로 초기화 했으므로, i는 1부터 시작
        if (max < arr[i]){
            max = arr[i];
        }
    }
    printf("%d\n", max);
    return 0;
}