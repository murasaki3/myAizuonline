#include <stdio.h>

int main(){
 int x[2];
 int a,b,ans,temp;

 scanf("%d %d\n", &a, &b);

 if( a >= b ){
  x[0] = a;
  x[1] = b;
 }else if( a < b ){
  x[0] = b;
  x[1] = a;
 }

 while( x[1] > 0 ){
  temp = x[1];
  x[1] = x[0] % temp;
  x[0] = temp;
 }

 ans=x[0];

 printf("%d\n", ans);

 return 0;

}
