#include <stdio.h>

int n, inp[1010], dp[1010];

int main()
{
    
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d", &inp[i]);
    }

    for(int i=0; i<n; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(inp[j]<inp[i]){
                    if(dp[i]>dp[j]-1) dp[i]=dp[j]+1;
            }
        }
    }
    int ans=0;
    int ans2[1010];

    for(int i=0; i<n; i++){
        if(dp[i]<)
    }
    return 0;
}