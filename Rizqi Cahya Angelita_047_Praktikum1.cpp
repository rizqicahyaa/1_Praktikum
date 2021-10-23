#include <iostream>
#include <math.h>
using namespace std;

int main(){
	string nama;
	float nomor_komputer, jam, menit, detik;
	cout<< "\t\tBilling Warnet\n";
	cout << "\n Tarif per-Jam = Rp 5.000 \n";
	cout<<" Masukkan Nama Anda = ";
	getline(cin,nama);
	cout << " Nomor Komputer Anda = ";cin >> nomor_komputer;
	cout << " Lama Pemakaian";
	cout << " Jam = ";cin >> jam;
	cout << " Menit = ";cin >> menit;
	cout << " Detik = ";cin >> detik;
	cout<<"	\n";
	cout<<"	Hasil Tarif";
	cout<<"\n";
	cout<<" Nama = "<<nama;
	cout<<"\n Nomor Komputer = "<<nomor_komputer;
	cout << "\n Total Tarif = " <<(jam*5000)+(menit*5000/60)+(detik*5000/3600)<<endl;
	
	return 0;
}
