#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;

int n;
struct aa{
    int date;
    char name[100];

}data[110];

int getdate(int y, int m, int d){
    return y*365+m*30+d;
}

bool compare(aa a, aa b){
    if(a.date==b.date){
        if(strcmp(a.name, b.name)==1) a.name<b.name;
        if(strcmp(a.name, b.name)==-1) a.name>b.name;
    };
    return a.date < b.date;
}

int main(){
    int y,m,d;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%s %d %d %d", data[i].name, &y, &m, &d);
        data[i].date=getdate(y,m,d);
        
        // printf("%d %d\n", data[i].con, data[i].num);
    }

    
    sort(data, data+n, compare);
    

    for(int i=0; i<n; i++){
        printf("%s\n", data[i].name);
    }
}