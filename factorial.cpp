#include <stdio.h>

int fac=1;

int factorial(int n){
    if(n==0){
        return 1;
    } else {
        return n* factorial(n-1);
    }
    
}

int main(){
    int m;
    scanf("%d", &m);

    printf("%d", factorial(m));
}   

// #include <stdio.h>


// int main(){
//     int m=0, i;
//     scanf("%d", &m);
//     i=m;

//     while(m>2){
//         if(m<=1) break;
//         i--;
//         m=m*i;
//         if(m<=1) break;
//         printf("%d\n", m);
        
//     }
// }