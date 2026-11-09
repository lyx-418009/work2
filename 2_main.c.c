//202611716218
//刘逸轩
#include<stdio.h>
typedef struct  
{
    int temp;
    int humi;
    int valid;
}Sensor;
 Sensor pack_sensor(Sensor s){
if(-20<s.temp&&s.temp<50&&0<s.humi&&s.humi<10){
    s.valid=1;
}else{
    s.valid=0;
}
return s;
}
int main(){
Sensor s;
s.valid=1;
scanf("%d %d",&s.temp,&s.humi);
 s=pack_sensor(s);
if(s.valid==1){
    printf("TEMP=%d HUMI=%d",s.temp,s.humi);
}else{
    printf("ERROR:OUT OF RANGE");
}
}