#include <stdio.h>
#include <algorithm>
using namespace std;


// int arr[10];

// int compare(int a, int b){
//     return a>b;
// }

// int main(){
//     for(int i = 0; i<10; i++) scanf("%d", &arr[i]);
//     sort(arr, arr+10, compare);
//     for(int i = 0; i<10; i++) printf("%d ", arr[i]);
// }

struct s{
    int x;
    int y;
} data[20];

bool compare(s a, s b){
    if(a.x==b.x) return a.y < b.y;
    return a.x < a.y;
    
}

int main(){
    for(int i=0; i<10; i++){
        scanf("%d %d", &data[i].x, &data[i].y);
    }
    sort(data, data+10, compare);
    for(int i=0; i<10; i++){
        printf("%d %d\n", data[i].x, data[i].y);
    }
}