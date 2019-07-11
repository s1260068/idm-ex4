#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    printf("What is your name?\n");
    char name[100];
    scanf("%s",name);
    printf("Hello, %s\n",name);
    printf("Rolling the dice...\n");
    int s;
    srand(time(NULL));
    int total = 0;
    for(int i=0;i<2;i++){
        s = rand() % 6 + 1;
        total+=s;
        printf("Die %d: %d\n",i+1,s);
    }
    printf("Total value: %d\n",total);
    if(total > 7){printf("%s won!\n",name);}
    else printf("%s lost\n",name);
    
    return 0;
    
}


