#include<stdio.h>
struct IPL {
    char name[100];
    char team[100];
    int score;
};
int main(){
    struct IPL data[300],temp;
    int n;
    printf("Enter number of players: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter player name: ");
        scanf("%s",data[i].name);
        printf("Team name: ");
        scanf("%s",data[i].team);
        printf("Match score: ");
        scanf("%d",&data[i].score);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(data[i].score>data[j].score){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }
    }
    printf("SCORECARD\n");
    printf("--------------------\n");
    for(int i=0;i<n;i++){
        printf("%s %s %d\n",data[i].name, data[i].team, data[i].score);
    }
   return 0; 
}