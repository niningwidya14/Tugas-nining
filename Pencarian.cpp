#include <iostream>
using namespace std;

int main() {
int i,x,cek;
bool hasil;
cout<<"banyaknya array :";
cin>> x;

int ar[x];
		for (i=0;i<x;i++) {   
		cout << "masukan idex ke" <<i<< ": ";
		cin >> ar[i]; 
	}

cout << "masukan data yang dicari :";
cin >> cek ;
	
	for (i=0;i<x;i++) {
	if (ar[i] == cek)
	{hasil=true; }
		else 
	{hasil=false;} }

	if (hasil == true)
	{cout << "data ada"; }
		else 
	{cout << "tidak ada data";}
	
return 0;
}