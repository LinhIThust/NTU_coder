#include<stdio.h>
void chiatao(int n){
int x,s=0;
if(n==1) printf("NO");
	else{
		for(int i=0;i<n;i++){
			scanf("%d",&x);
			s+=x;
			}
		if(s %2 ==0) printf("YES");
			else printf("NO");
	}
}
int main(){
int n;
scanf("%d",&n);
chiatao(n);
}
