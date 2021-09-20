/*Buatlah program untuk menghitung sisi miring dan keliling segitiga siku-siku dengan sisi tegak mendatar merupakan input dari keyboard (diinpukkan user),
 dengan rumus : sisimiring = sqrt(alas*alas+tinggi*tinggi) dan keliling = alas+tinggi+sisimiring*/
#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

main(){
	int a, t;
	int smiring, keliling;
	
	cout<<"|--------------------------------------------------------------|"<<endl;
	cout<<"|Program menghitung sisi miring dan keliling segitiga siku siku|"<<endl;
	cout<<"|--------------------------------------------------------------|"<<endl;
	cout<<"masukkan alas segitiga = ";
	cin>>a;
	cout<<"masukkan tinggi segitiga = ";
	cin>>t;
	smiring=sqrt((a*a)+(t*t));
	cout<<"sisi miring = "<<smiring<<endl;
	keliling=a+t+smiring;
	cout<<"keliling = "<<keliling<<endl;
	cout<<"|--------------------------------------------------------------|"<<endl;
	
	getch();
}
