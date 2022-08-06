#include <stdio.h>

int n, k, d[100];

int lower_bound(int k){
    int m, s=1, e=n+1;
    while(d[s]==d[e]){
        m=(s+e)/2;
        if(d[m]<k) s = m;
        else e=m;
    }
    return e-s;
}

int main()
{
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
        scanf("%d", &d[i]);

    scanf("%d", &k);

    printf("%d\n", lower_bound(k));
}