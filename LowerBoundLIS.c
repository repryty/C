#include <stdio.h>
#define MAX 1000000

int N, lis_size, inp[MAX], lis[MAX];

int lower_bound(int s, int e, int k){
    int m;
    while(s<e){
    m = (s+e)/2;
    if(lis[m] < k) s = m + 1;
    else e = m;
    }
    return e;
}



int main(){
 scanf("%d", &N);
 for(int i=0; i<N; i++){
    scanf("%d", &inp[i]);
    int tmp = lower_bound(0, lis_size, inp[i]);
    lis[tmp] = inp[i];
    if(tmp == lis_size) lis_size++;
 }
 printf("%d ", lis_size);
}