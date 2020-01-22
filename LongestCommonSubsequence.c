#include <stdio.h>
#include <string.h>

int lcs(char x[], char y[]){
 int i,j;
 int m = strlen(x);
 int n = strlen(y);
 int c[m+1][n+1];


 for(i = 0;i <= m; i++)
  c[i][0] = 0;
 for(j = 0;j <= n; j++)
  c[0][j] = 0;

 for(i = 1;i <= m; i++){
  for(j = 1;j <= n; j++){
    if(x[i-1] == y[j-1])
     c[i][j] = c[i-1][j-1] + 1;
    else if(c[i-1][j] >= c[i][j-1])
     c[i][j] = c[i-1][j];
    else
     c[i][j] = c[i][j-1];
  }
 }
 return c[m][n];
}

int main(){
 char x[1000],y[1000];
 int n,i,j;
 scanf("%d",&n);
 for(i = 0;i < n;i++){
    scanf("%s %s",x, y);
   printf("%d\n",lcs(x,y));
 }

 return 0;


}
