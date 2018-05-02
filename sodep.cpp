#include <stdio.h>
void sodep(int n){
	int s=0;
	while(n>0){
	s+= n%10;
	n =(n-n%10)/10;
}
if(s %10 == 9) printf("YES");
	else printf("NO");
}
int main(){
	scanf("%d",&n);
	sodep(n);
}