#include <stdio.h>
int main(){
int n;
printf("enter the no.: ");
scanf("%d",&n);
int r = 0;
while(n>0){
r = r*10;
r = r + (n%10);
n = n/10;
}
printf("reversed is  : %d",r);
return 0;
}