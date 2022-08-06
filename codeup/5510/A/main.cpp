#include <stdio.h>
#include <algorithm>
using namespace std;


struct machine
{
    int num;
    int gas;
    int score;
}machines[110];

bool compare(machine a, machine b){
    if(a.num == b.num) return a.gas < b.gas;
    return a.num < b.num;
}

int main(){
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &machines[i].num, &machines[i].gas);
    }
    
    sort(machines, machines+n, compare);
    

    for(int i=0; i<n; i++){
        printf("%d %d\n", machines[i].num, machines[i].gas);
    }
}