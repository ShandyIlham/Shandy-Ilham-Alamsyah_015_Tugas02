/*Buatlah program untuk mengetahui cicilan, total harga cicilan dan keuntungan dealer dari pembelian sepeda motor anda, dengan ketentuan sebagai berikut :
 - Harga pokok = harga motor / lama kredit (dalam bln)
 - Bunga = harga pokok * 0.1
 - Cicilan = harga pokok + bunga
 - Total harga motor = cicilan * lama kredit (dalam bulan)
 - Keuntungan diler = total harga motor - harga motor*/
#include <iostream>
#include <conio.h>
using namespace std;

main(){
	int harga, bunga, cicilan, lama, pokok;
	int total, untung;
	
	cout<<"|============================================|"<<endl;
	cout<<"|            Program Cicilan Motor           |"<<endl;
	cout<<"|============================================|"<<endl;
	cout<<"Harga motor		= Rp.";cin>>harga;
	cout<<"lama kredit (bulan)	= ";cin>>lama;
	
	pokok=harga/lama;
	bunga=pokok*0.1;
	cicilan=pokok+harga;
	total=cicilan*lama;
	untung=total-harga;
	
	cout<<"|                rincian biaya               |"<<endl;
	cout<<"|============================================|"<<endl;
	cout<<"Harga pokok motor 	= Rp."<<pokok<<endl;
	cout<<"bunga			= Rp."<<bunga<<endl;
	cout<<"cicilan			= Rp."<<cicilan<<endl;
	cout<<"total harga motor	= Rp."<<total<<endl;
	cout<<"keuntungan dealer	= Rp."<<untung<<endl;
	cout<<"=============================================="<<endl;
	
	getch();
}
