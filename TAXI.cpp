#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int counter[4];

void readData(char *fn,int*p){
	ifstream f(fn);
	int n;
	int it;
	f>> n;
	for(int i=0;i<n;i++){
		f>>it;
		p[i] = it;
	}
}
int TAXI(int A[],int n){
	for(int i = 0;i< n;i++)
		counter[A[i]-1]++;
	return counter[3]+ counter[2]+(counter[1]*2 + max(counter[0]-counter[2],0)+3)/4;
}
int main(){
	ifstream f("taxi.txt");
	int MAXN;
	f>>MAXN;
	int A[MAXN];
	int* p = &A[0];
	readData("taxi.txt",p);
	cout<<TAXI(A,MAXN);


}