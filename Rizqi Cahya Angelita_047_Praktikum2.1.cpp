#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int menu;
	float panjang, tinggi, alas, luas, keliling, sisi_miring, hasil;
	
	cout<<"Menu Segitiga Siku-Siku";
	cout<<"\n1. Hitung Panjang Sisi Miring";
	cout<<"\n2. Hitung Luas";
	cout<<"\n3. Hitung Keliling";
	cout<<"\n4. Keluar Program";
	cout<<"\nMasukkan Pilihan = ";
	cin>>menu;
	
	cout<<"\Masukkan Panjang Alas Segitiga = ";
	cin>>alas;
	cout<<"Masukkan Tinggi Segitiga = ";
	cin>>tinggi;
	
	sisi_miring=sqrt(alas*alas+tinggi*tinggi);
	luas=0.5*alas*tinggi;
	keliling=alas+tinggi+sisi_miring;
	
	switch(menu) {
		case 1:hasil=sisi_miring;
			cout<<"\nPanjang Sisi Miring = "<<sisi_miring;
			break;
		case 2:
			cout<<"Panjang Luas Segitiga = "<<luas;
			break;
		case 3:
			cout<<"Keliling Segitiga = "<<keliling;
			break;
		case 4:
			cout<<"Keluar";
			break;
		default:
		cout<<"Menu Tidak Ada";	
	}
	
	
	
	
	
	return 0;
}
