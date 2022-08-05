#include <stdio.h>

int n, s, e, k, inp[1010], arr[1010];

int lower_bound(k){
    for(int i = 0; i<n; i++){
        int m=(s+e)/2;
        if(inp[m]>k) e=m;
        if(inp[m]<k) s=m+1;
    }
}

int main(){
    
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d", inp[i]);
    }

    //lower_bound(0, n, );
}