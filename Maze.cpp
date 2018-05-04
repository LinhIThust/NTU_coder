// Dua ra ca duong di de thoat khoi Me cung
#include<iostream>
#include<fstream>

using namespace std;

int **Maze;		// Me cung. 0: Co the di duoc   ;   1: Khong the di duoc
char *result;	// 1: Di len  ;  2: Di xuong   ;   3: Sang trai   ;   4: Sang Phai
int size;		// Kich thuoc cua ma tran
int sx,sy,fx,fy;
int MINstep = 99;
// Khoi tao me cung, lay du lieu tu file
void Initialize(){
	cin >> size;
	cin >> sx >> sy >> fx >> fy;
	Maze = new int*[size];
	for(int i = 1; i < size ; i ++){
		Maze[i] = new int[size];
		for(int j = 1 ; j < size ; j ++){
			cin >> Maze[i][j];
			//cout<<Maze[i][j];
		}
		//cout<<endl;
	}
	result = new char[size * size];
}

// Hien thi duong di
bool isOK = false;

// Dung thuat toan loang de tim duong di trong Me cung
void Spread(int i, int j){

	if( i== fx && j ==fy){
		isOK = true;
	}
	Maze[i][j] = 1;
	if( i>0 && Maze[i - 1][j] != 1){
		Spread(i - 1, j);
	}
	if(i<size-1 && Maze[i + 1][j] != 1){
		Spread(i + 1, j);
	}
	if(j>0 && Maze[i][j - 1] != 1 ){
		Spread(i, j - 1);
	}
	if(j<size-1 && Maze[i][j + 1] != 1 ){
		Spread(i, j + 1);
	}
	Maze[i][j] = 0;
}

int main(){
	freopen("inputLINE.txt","r",stdin);
	Initialize();
	Spread(sx, sy);
	if(isOK)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}
