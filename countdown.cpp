#include <stdio.h>

int countdown(int n){
    n--;
    printf("%d\n", n);
    if(n!=1) countdown(n);
}

int main(){
    int m;
    scanf("%d", &m);

    countdown(m);
}

// #include <stdio.h>

// int main(){
//     int m;
//     scanf("%d", &m);

//     for(int i = m; i>0; i--){
//         printf("%d\n", i);
//     }
// }
