#include <stdio.h>
int gapgiay(int a,int b){
int count=0;
while(a<b){
	count++;
	a=2*a;
}
return count;
}
int main(){
int a,b;
scanf("%d %d",&a,&b);
printf("%d",gapgiay(a,b));
}