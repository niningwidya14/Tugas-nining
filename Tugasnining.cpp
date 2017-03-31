#include <iostream>
using namespace std;

// deklarasi fungsi
bool iswithinRange(float nilai, int max, int min);
void prosesCetak();

//deklarasi variable
float nilai_ip, total_ip;
bool valid;
int juml_mahasiswa, juml_lulus, juml_tidaklulus;

int main() {
do {
cout << "masukan nilai ip : ";
cin >> nilai_ip;
valid = iswithinRange(nilai_ip,4,0);
if (valid){
if (nilai_ip >= 2.75){
juml_lulus++;
} else {
	juml_tidaklulus++;
}
total_ip = total_ip + nilai_ip;
juml_mahasiswa++;
} else {
cout << "tidak ada data" << endl;
}
} while (nilai_ip != -999);
prosesCetak();
}

bool iswithinRange(float nilai, int max, int min){
if (nilai > max || nilai <= 0 ){
return false;
}
return true;
}
 //proses Cetak
void prosesCetak() {
cout << "Banyaknya Mahasiswa : " << juml_mahasiswa << endl;
cout << "Banyaknya Mahasiswa lulus : " << juml_lulus << endl;
cout << "Banyaknya Mahasiswa Tidak Lulus : " << juml_tidaklulus << "/n";
cout << "Rata rata Nilai IP : " << (total_ip / juml_mahasiswa) << "/n";
}