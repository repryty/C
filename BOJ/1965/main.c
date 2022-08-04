#include <stdio.h>

int n, inp[1010], dp[1010]; //변수 선언

int main(){
    
    scanf("%d", &n); //입력 받기
    for(int i=0; i<n; i++){
        scanf("%d", &inp[i]);
    }

    for(int i=0; i<n; i++){ 
        dp[i]=1; //dp 모두 1로 설정
        for(int j=0; j<i; j++){ 
            if(inp[j]<inp[i]){  
                    if(dp[i]<dp[j]+1) dp[i]=dp[j]+1; 
            }
        }
    }
    int ans=0; //변수 선언

    for(int i=0; i<n; i++){   //i번 반복
        if(ans<dp[i]) ans=dp[i]; //ans가 i번 dp보다 적다면 ans를 i번 dp로 설정
    } 
    printf("%d", ans); \

    return 0;
}
