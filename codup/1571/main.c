#include <stdio.h>

int n, k, d[1010];


int upper_bound(int k){
    int m;
    int s=1, e=n+1;
    while (s<e)
    {
        m= (s+e)/2;
        if(d[m]<=k) s = m+1;
        else e=m;
    }
    return e;
}


int main()
{
   scanf("%d", &n);

  for(int i=1; i<=n; i++)
    scanf("%d", &d[i]);

  scanf("%d", &k);

  printf("%d\n", upper_bound(k));
}
