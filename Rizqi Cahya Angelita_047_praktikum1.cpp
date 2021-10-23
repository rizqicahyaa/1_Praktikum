#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float nomor_bilik, jam, menit, detik;
	cout<< " Billing Warnet\n";
	cout << " \nTarif per-Jam = Rp 5.000 \n";
	cout << " Nomor Bilik = ";cin >> nomor_bilik;
	cout << " Lama Pemakaian";
	cout << " Jam = ";cin >> jam;
	cout << " Menit = ";cin >> menit;
	cout << " Detik = ";cin >> detik;
	cout << " \n Total Billing = " <<(jam*5000)+(menit*5000/60)+(detik*5000/3600)<<endl;
	
	return 0;
}
