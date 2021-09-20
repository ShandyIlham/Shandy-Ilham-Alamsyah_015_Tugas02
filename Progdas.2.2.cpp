/*Buatlah program untuk menghitung nilai rata-rata dari mata kuliah pemrograman terstruktur,
 dengan ketentuan sebagai berikut :
 Nilai praktikum 40 %, Nilai teori 40 %, Nilai tugas dan final project 20 %*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	char nim[12],nama[40];
	float a, b, c, a1, b1, c1;
	float mean;
	
	cout<<"|----------------------------------------|"<<endl;
	cout<<"|     Program Hitung Nilai Rata-Rata     |"<<endl;
	cout<<"|----------------------------------------|"<<endl;
	cout<<"Nama	= ";cin>>nama;
	cout<<"NIM	= ";cin>>nim;
	cout<<"=========================================="<<endl;
	cout<<"masukkan nilai praktikum = ";cin>>a;
	cout<<"masukkan nilai teori = ";cin>>b;
	cout<<"masukkan nilai tugas dan final project = ";cin>>c;
	a1=a*40/100;
	b1=b*40/100;
	c1=c*20/100;
	mean=(a1+b1+c1);
	cout<<"=========================================="<<endl;
	cout<<"rata-rata mata kuliah pemrograman = "<<mean<<endl;
	cout<<"=========================================="<<endl;
	
	getch();
}
