#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// prices_len은 배열 prices의 길이입니다.
int* solution(int prices[], size_t prices_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* a = (int*)malloc(sizeof(prices));
    int answer[prices_len];
    answer[0] = 1;
    int cnt = 1;
    for (int i = 1; i < prices_len; i++) {
        if (a[i] >= a[i - 1]) {

            for (int j = 0; j < i; j++) {
                cnt++;
                answer[j] = answer[j] + cnt;
                
            }
        }
        else
            cnt = 0;
        
    }
    // 테스트 변경사항
    return answer;
}
int main(void) {

}