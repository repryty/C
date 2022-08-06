#include <stdio.h>
#define LEN 10

int hashTable[LEN];

int hashFunc(int data){
    return data % 10;
}

int main(){
    int inp;
    int hashValue;
    int idx;
    for(int i=0; i<10; i++) hashTable[i] = -1;
    
    while(1){
        printf("save ");
        scanf("%d", &inp);

        if(inp < 0) break;

        hashValue = hashFunc(inp);
        
        idx=hashValue;
        while (hashTable[idx]!=-1)
        {
            idx++;
            if(idx >= LEN ) idx = 0;
            if(idx==hashValue)break;
        }
        if(hashTable[idx]==-1) hashTable[idx] =inp;
        else printf("full\n");
        
    }

    while (1)
    {
        printf("get ");
        scanf("%d", &inp);

        if(inp <0) break;
        
        hashValue=hashFunc(inp);

        idx=hashValue;
        while(hashTable[idx]!=-1 and hashTable[idx] != inp){
            idx = (idx +1) % LEN;
            if(hashTable[idx]==-1 or idx == hashValue) break;
        }



        if(hashTable[hashValue]==inp) printf("%d watched\n", hashValue);
        else printf("cant\n");
    }
    
}