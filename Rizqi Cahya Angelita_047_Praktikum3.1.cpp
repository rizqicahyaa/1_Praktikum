#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int i, kuadrat, jumlah_b, jumlah_k;
	float akar, jumlah_a;
	
	cout<<"\tJUMLAH 6 SUKU PERTAMA\n";
	jumlah_b=0;
	jumlah_k=0;
	jumlah_a=0;
	
	for(i=1; i<=6; i++){
		kuadrat=i*i*i;
		akar=sqrt(i);
		jumlah_b=i;
		jumlah_k=jumlah_b+kuadrat;
		cout<<"\nSuku Ke-"<<i<<" = "<<kuadrat;
	}
	cout<<"\n";
	cout<<"Jumlah Suku Ke-"<<jumlah_b<<" = "<<jumlah_k;
	
	
return 0; 	
}
