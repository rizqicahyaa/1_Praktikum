#include <iostream>
using namespace std;

int main(){
	int i, n, c, nilai_awal=3, selisih=4, jumlah=0;
	
	cout<<"\tMenghitung jumlah deret"<<endl;
	cout<<"\n";
	cout<<"Nilai Awal = 3";
	cout<<"\nSelisih Nilai = 4"<<endl;
	
	cout<<"\nMasukkan deret ke-n = ";
	cin>>n;
	cout<<"\n";
	cout<<nilai_awal<<",";
	jumlah=jumlah+nilai_awal;
	for(i=0; i<n-1; i++){
		c=nilai_awal+selisih;
		nilai_awal=c;
		cout<<c<<",";
		jumlah=jumlah+c;
	}
	cout<<"\n";
	cout<<"\nJumlah Deret ke-"<<n<<" = "<<jumlah;

	return 0;
}
