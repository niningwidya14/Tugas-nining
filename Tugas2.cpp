#include <iostream>
using namespace std;
 
int perbandingan(int a, int b);
int main(){
int nilai1,nilai2;
 cout << "masukkan nilai a : ";
 cin >> nilai1;
 cout << "masukkan nilai b : ";
 cin >> nilai2;
 cout << "nilai maksimalnya adalah : " << perbandingan (nilai1 , nilai2);
}
int perbandingan (int a,int b){
  return max(a,b);
 }
 

 
 