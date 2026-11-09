//202611716218
//刘逸轩
#include<stdio.h>
typedef struct  
{char name[16];
int score;
}Player;
void  sort_player( Player arr[],int n)
{int e ,q;
    Player jh;
for(e=0;e<n-1;e++){
    for(q=0;q<n;q++){
        if(arr[q].score<arr[q+1].score){
          jh=arr[q];
          arr[q]=arr[q+1];
          arr[q+1]=jh;
        }
    }
}
}
int main()
{
    int n;
    scanf("%d",&n);
Player players[10];
int i;
for(i=0;i<n;i++){
    scanf("%s %d",players[i].name,&players[i].score);
}
    sort_player(players, n);
    for(i=0;i<n;i++){
printf("%s %d\n",players[i].name,players[i].score);
}
}