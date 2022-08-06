#include <stdio.h>
char BT[1<<5];

void pre(int k){
    if(BT[k]=='.' or BT[k]=='\0') return;
    printf("%c", BT[k]);
    pre(2*k);
    pre(2*k+1);
}

void in(int k){
    if(BT[k]=='.' or BT[k]=='\0') return;
    in(2*k);
    printf("%c", BT[k]);
    in(2*k+1);
}

int main(){
    scanf("%s", &BT[1]);
    int j=2;
    for(int i=1; BT[i]!='\0'; i++){
        printf("%c", BT[i]);
        if(i==j-1){
            printf("\n");
            j*=2;
        }
    }
    printf("\n");
    pre(1);
    printf("\n");
}