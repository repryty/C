#include <stdio.h>
#include <algorithm>
using namespace std;

int n;
struct aa{
    int num;
    int con;
    int sco;
}data[110];

bool compare(aa a, aa b){
    return a.sco < b.sco;
}

int main(){ 
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d %d", &data[i].num, &data[i].con, &data[i].sco);
        // printf("%d %d\n", data[i].con, data[i].num);
    }
    for(int i=0; i<n; i++){
        sort(data, data+n, compare);
    }
    for(int i=0; i<data[i].con; i++){
        for(int j=0; j<110; j++){
            strcmp
        }
    }

    int i=0;
    while(i<3){
        printf("%d %d\n", data[i].con, data[i].num);
        i++;
    }
}
