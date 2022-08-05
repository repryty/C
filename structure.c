#include <stdio.h>

struct user{
    char nickname;
    char password;

} data[3];

int main(){
    for(int i = 0; i<3; i++){
        printf("User: ");
        scanf("%s", &data[i].nickname);
        printf("PassWord: ");
        scanf("%s", &data[i].password);
    }
    for(int i = 0; i<3; i++){
        printf("User: %s\n", &data[i].nickname);
        printf("PassWord: %s\n", &data[i].password);
    }
}