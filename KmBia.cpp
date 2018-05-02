#include <bits/stdc++.h>
using namespace std;
int bia(int n){
	int s =n;
	while(n>=10){
		s+=(n/10)*3;
		n=(n/10)*3+n%10;
	}
return s;	
}
int main(){
	int n;
	cin>>n;
	cout<<bia(n);

}