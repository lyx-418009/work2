//202611716218
//刘逸轩
#include <stdio.h>
typedef struct 
{
int buffer[3];
int count;
}Window;
Window push_data(Window win,int val)
{
    win.buffer[win.count%3]=val;
    win.count++;
    return win;
};
int get_average(Window win){
    int sum=0;
    int i;
    int a;
if (win.count<3){
for(i=0;i<win.count;i++){
    sum=sum+win.buffer[i];
    a=sum/win.count;
}
}else{
for(i=0;i<3;i++){
    sum=sum+win.buffer[i];
    a=sum/3;
}
}
return a;
}
int main(){
int m;
scanf("%d",&m);
Window win;
win.count=0;
if(0<m&&m<=6){
    int i;
    int val;
for(i=0;i<m;i++){
scanf("%d",&val);
win=push_data(win,val);
int a=0;
a=get_average(win);
printf("%d\n",a);
}
}
}