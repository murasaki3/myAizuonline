#include <stdio.h>
#include <string.h>

int main(){

 char s[200];
 char p[200];
 char ss[200];

 scanf("%s",s);
 scanf("%s",p);
 strcat(ss,s);
 strcat(ss,s);

 if(strstr(ss,p))
  printf("Yes\n");
 else
  printf("No\n");

 return 0;
}
