#include <stdio.h>
#define LEN 10

struct StaitionList
{
    char name;
    int next;
}list[LEN];

int head;

void initStationList(){
    list[0].name='B';
    list[0].next=-1;
    list[1].name='D';
    list[1].next=3;
    list[2].name='S';
    list[2].next=4;
    list[3].name='E';
    list[3].next=0;
    list[4].name='C';
    list[4].next=1;

    head = 2;
}

void printStationList(int n){
    int idx = head;
    int j=0;
    while(idx != -1){
        idx=list[idx].next;
        j++;
        if(j==n){
            printf("[%c]", list[idx].name);
            break;
        }
        
    }
    printf("\n");
}

void insertStationList(int insIdx, char insName, int prevIdx){
    list[insIdx].name = insName;
    list[insIdx].next=list[prevIdx].next;
    list[prevIdx].next=insIdx;
}

void deleteStationList(int delIdx, int preIdx){
    list[preIdx].next = list[delIdx].next;
}

int main(){
    initStationList();
    // printStationList();
    // printf("\n");
    // //insertStationList(5, 'G', 2);
    // //printStationList();
    // deleteStationList(2, -1);
    // head=list[2].next;
    // insertStationList(5, 'O', 4);
    int n;
    scanf("%d", &n);

    printStationList(n);
}