#include <iostream>
#include <string>
using namespace std;


template <class c>
void sg(c k[],int b){
	for(int i = 0; i < 10; i++) {
		if(i==b){
		cout <<"["<< k[i] <<"]"<< " ";	
		}
		else{
			cout << k[i] << " ";
		}

}
}


template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	int k=1,j=1,num=1,p=0;

	
	while(k<N)
	{
	j=k;
	sg(d,k);
	num=k;
	while(d[j]>d[j-1])
{
		swap(d,j,j-1);	
		num--;
		if(j>1){	
		j--;
	
		}		
}
cout<<"=> ";
sg(d,num);
		cout<<"\n";
		k++;
	}
	


}

int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
