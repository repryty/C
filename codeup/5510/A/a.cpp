#include <stdio.h>
#include <algorithm>
using namespace std;

struct a
{
    int num;
    int gas;
}data[10];

int main(){ 
    scanf("%d %d", &data[1].num, &data[1].gas);
    printf("\n%d %d", data[1].num, data[1].gas);
}
