#include <bits/stdc++.h>
using namespace std;
int fibonacy(int n){
	int s=0;
	if( n==1|| n==2) s=1;
		else s=fibonacy(n-1)+fibonacy(n-2);
		return s;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
 		printf( "%d ",fibonacy(i));
}
