#include<bits/stdc++.h>
using namespace std;
int pass( unsigned long long n){
	int s=0;
	while( n>0){
		s+=n%10;
		n=n/10;
	}
return s;
}
int main(){
	unsigned long long n;
	cin>>n;
	cout<<pass(n);
}
