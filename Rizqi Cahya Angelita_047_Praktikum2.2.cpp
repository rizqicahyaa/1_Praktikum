#include <iostream>
using namespace std;


int main() {
	string nama;
	char golongan;
	int jam_kerja, upah_per_jam, total_upah;
	
	cout<<"\n\tMENGHITUNG GAJI KARYAWAN";

	cout<<"\nMasukkan Nama	= ";
	getline(cin,nama);
	cout<<"Masukkan Golongan	= ";
	cin>>golongan;
	cout<<"Masukkan Jumlah Jam Kerja	= ";
	cin>>jam_kerja;
	
	switch(golongan) {
		case 'A':
			upah_per_jam=5000;
			break;
		case 'B':
			upah_per_jam=7000;
			break;
		case 'C':
			upah_per_jam=8000;
			break;
		case 'D':
			upah_per_jam=10000;
			break;
		default:
			upah_per_jam=0;
	}
	
	cout<<"\n";
	cout<<"\n\tHasil Perhitungan  ";
	
	cout<<"\nNama	= 	"<<nama;
	
if(jam_kerja<=48){
	total_upah=upah_per_jam*jam_kerja;
	cout<<"\nMenerima Gaji	= Rp. "<<total_upah<<"/minggu";
}else if(jam_kerja>48){
	total_upah=upah_per_jam*48+(jam_kerja-48)*4000;
	cout<<"\nMenerima Gaji	= Rp. "<<total_upah<<"/minggu";
}else{
	cout<<"Tidak Menerima Gaji";
}

	return 0;
}
