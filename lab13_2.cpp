#include<iostream>
using namespace std;

const int N = 6;

void inputMatrix(double [][N]);

void findLocalMax(const double [][N], bool [][N]);

void showMatrix(const bool [][N]);

int main(){
	double A[N][N]; 
	bool B[N][N]={}; 
	cout << "Input the matrix.....";
	
	inputMatrix(A);
	findLocalMax(A,B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}
void inputMatrix(double in[][N]){
	for(int i=0;i<N;i++){
	cout<<"\nRow "<<i+1<<": ";
	for(int j=0;j<N;j++){
		cin>>in[i][j];	
	} 

	}
	
	
}
void findLocalMax(const double a[][N], bool b[][N]){
//	int maxr[5];
//	int maxc[5];
//	int k=0;
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		if(a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j+1]&&a[i][j]>=a[i-1][j]&&a[i][j]>=a[i][j-1]){
			b[i][j]=1;
			
		}

	}
	
}
	for(int i=0;i<N;i++){
		b[0][i]=0;
	}for(int i=0;i<N;i++){
		b[N-1][i]=0;
	}
		for(int i=0;i<N;i++){
		b[i][0]=0;
	}
	for(int i=0;i<N;i++){
		b[i][N-1]=0;
	}
}
void showMatrix(const bool out[][N])
{
	for(int i=0;i<N;i++){
	for(int j=0;j<N;j++){
		cout<<out[i][j]<<" ";
	} 
		cout << "\n";
	}
	
}

