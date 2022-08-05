#include <stdio.h>
#define max 40000

int m, n, size=0, inp[max], lis[max];

int lowerbound(int s, int e, int k){ 
    while(s<e){
        m=(s+e)/2;
        if(lis[m]>=k) e=m;
        else s=m+1;
        
    }
    return e; 
}

int main(){
    scanf("%d", &n); 

    for(int i=0; i<n; i++){
        scanf("%d", inp[i]);
        int temp = lowerbound(0, size, inp[i]);
        lis[temp] = inp[i];
        if(temp == size) size++;
    }
    printf("%d ", size);
}