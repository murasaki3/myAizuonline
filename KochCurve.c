#include <stdio.h>
#include <math.h>

int n;

void koch(int d, double x1, double y1, double x2,double y2){
 double sin60 = sqrt(3.0)/2.0;
 double cos60 = 0.5;

 double sx = (2 * x1 + x2)/3;
 double sy = (2 * y1 + y2)/3;
 double tx = (2 * x2 + x1)/3;
 double ty = (2 * y2 + y1)/3;

 double vx = tx - sx;
 double vy = ty - sy;

 double ux = sx + cos60 * vx - sin60 * vy;
 double uy = sy + sin60 * vx + cos60 * vy;


 if(d >= n)
  return;

 koch(d + 1,x1,y1,sx,sy);
 printf("%.8f %.8f\n",sx,sy);
 koch(d + 1,sx,sy,ux,uy);
 printf("%.8f %.8f\n",ux,uy);
 koch(d + 1,ux,uy,tx,ty);
 printf("%.8f %.8f\n",tx,ty);
 koch(d + 1,tx,ty,x2,y2);
 }

int main(){

  scanf("%d",&n);
  printf("%.8f %.8f\n",0.0,0.0);
  koch(0,0.0,0.0,100.0,0.0);
  printf("%.8f %.8f\n",100.0,0.0);
  return 0;
}
