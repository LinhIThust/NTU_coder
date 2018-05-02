/*Cho một dãy n số nguyên a1, a2, ..., an. Hãy tìm hai chỉ số i, j sao cho i < j và hiệu aj - ai là lớn nhất.
>>CÁCH LÀM
-ta sẽ tìm ra số lớn nhất trong các só bên phải số nhỏ nhất
-tại vị trí i : ta sẽ kiểm tra xem
				+, a[i] -min >max -> update max
				+,a[i] < min khong ? nếu có cập nhận min
copyright :Linhdzet
*/
#include<bits/stdc++.h>
#define MAXN 100000
using namespace std;
int n;
int A[MAXN];
/* ĐÂY LÀ CÁCH SINH 1 FILE DỮ LIỆU ĐỂ TEST
->Đọc và tự hiểu nhé!!
*/
void creatData(char* fn,int n){
	FILE* f= fopen(fn,"w");
	fprintf(f,"%d\n",n);
	for(int i= 0;i<n;i++){
		fprintf(f,"%7d",rand()%5000);
	}
	fclose(f);
}

void readFileC(char* fn){
	FILE* f = fopen(fn,"r");
	fscanf(f,"%d",&n);
	for(int i= 0;i<n;i++){
		fscanf(f,"%d",&A[i]);
	}
	fclose(f);
}
int hieuSo(int n,int A[]){
	int min =A[0];
	int max=A[1];
	for(int i =1;i<n;i++){
		if(A[i]-min > max) max=A[i]-min;
		if(min >A[i]) min=A[i];
	}
	return max;
}
int main(){
	creatData("hieuSo.txt",5000);
	readFileC("hieuSo.txt");
	cout<<"Hieu so max ="<<hieuSo(n,A);

}