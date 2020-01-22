#include <stdio.h>

int main(){
 int x[3];
 int temp;

 scanf("%d %d %d\n",&x[0],&x[1],&x[2]);
 if(x[0]>x[1]){
  temp=x[0];
  x[0]=x[1];
  x[1]=temp;
 }
 if(x[1]>x[2]){
  temp=x[1];
  x[1]=x[2];
  x[2]=temp;
 }
 if(x[0]>x[1]){
  temp=x[0];
  x[0]=x[1];
  x[1]=temp;
 }

 printf("%d %d %d\n",x[0],x[1],x[2]);
 return 0;
}
