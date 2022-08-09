#include <stdio.h>
#define LENGTH 100

int fibNum[LENGTH];
void initfiboNum(){
    for(int i=0;i<LENGTH;i++){
        fibNum[i] = -1;
    }
}

int fib(int n){
    for(int i=0; i<=n; i++){
        if(i==0||i==1){
            fibNum[i]=1;
        } else {
            fibNum[i]=fibNum[i-1]+ fibNum[i-2];
        }
    }
    return fibNum[n];
}

int main(){
    int a;
    scanf("%d", &a);
    printf("%d", fib(a));
}