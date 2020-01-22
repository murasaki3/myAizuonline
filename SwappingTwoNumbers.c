#include <stdio.h>

int main(){
 int x[2999];
 int y[2999];
 int i = 0;
 int c = 1;
 int j;

 while(1){
  scanf("%d %d\n",&x[i], &y[i]);
  if(x[i] == 0 && y[i] == 0)
     break;

  i++;
 }

 for(j = 0;j < i;j++){
  if(x[j] < y[j])
   printf("%d %d\n",x[j], y[j]);
  else
   printf("%d %d\n",y[j], x[j]);
 }
 return 0;
}
