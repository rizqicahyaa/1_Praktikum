#include <iostream>
using namespace std;

int main(){
	
	int i, j, n=5;
	
	cout<<"Masukkan Segitiga Angka = ";
	cin>>n;
	for(i=1; i<=n; i++){
		for(j=1; j<=i; j++){
			cout<<j;
		}
		cout<<"\n";
	}
	for(i=n-1; i>=1; i--){
		for(j=1; j<=i; j++){
			cout<<j;
		}
		cout<<"\n";
	}
	
	
	
	
	
	return 0;
}
