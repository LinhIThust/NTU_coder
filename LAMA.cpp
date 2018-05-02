#include <bits/stdc++.h>
#include<string>
using namespace std;
map<char ,int > A;

int main() {
	A['I']= 1;	
	A['V']= 5;	
	A['X']= 10;		
	A['L']= 50;
	A['C']= 100;
	A['D']= 500;
	A['M']= 1000;
	char s[20];
	cin>>s;
	int n = strlen(s);
//	cout<<n<<endl;
	int sum = 0;
	int i=1;
	while(i<=n){
	//	cout<<i<<"  "<< A[s[i-1]]<<"  "<<A[s[i]];
		if( A[s[i-1]] >= A[s[i]]){
			sum+= A[s[i-1]];
		}
		else{
			sum=sum+A[s[i]] -A[s[i-1]];
			i++;}
	//	cout<<"  "<<sum<<endl;
		i++;
	}
	cout<<sum;
}
