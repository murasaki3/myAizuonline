#include <stdio.h>


int main(){

 int n,i,l,j,k,ans;
  int p[100];
 int m[100][100];

 scanf("%d",&n);

 for(i = 1; i <= n; i++)
  scanf("%d %d",&p[i-1],&p[i]);

 for(i = 1; i <= n; i++)
   m[i][i] = 0;

 for(l = 2; l <=n; l++){
  for(i = 1; i <= n-l+1; i++){
   j = i + l - 1;
   m[i][j] = 100000000000000;
    for(k = i; k < j;k++){
     if(m[i][j] > m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j])
      m[i][j] = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
    }
   }
  }



 printf("%d\n",m[1][n]);

 return 0;
}
