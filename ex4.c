#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("Rolling the dice...\n");
    char name[100];
    scanf("%s",name);
    printf("Hello, %s\n",name);
    int s;
    srand(time(NULL));
    int total = 0;
    for(int i=0;i<2;i++){
        s = rand() % 6 + 1;
        total+=s;
        printf("Die %d: %d\n",i+1,s);
    }
    printf("Total value: %d\n",total);
    if(total > 7){printf("You won!\n");}
    else printf("You lost\n");

    return 0;
    
}

