#include <stdio.h>
void sobanbe(int n,int m){
int s=0;
int s1=0;
for(int i=1;i<n;i++)
	if(n%i == 0) s+=i;
if(s != m) printf("NO");
	else{
	for(int i=1;i<m;i++)
		if(m%i == 0) s1+=i;
	if(s1== n) printf("YES");
        else printf("NO");
	}
}
int main(){
int n,m;
scanf("%d %d",&n,&m);
sobanbe(n,m);
}
