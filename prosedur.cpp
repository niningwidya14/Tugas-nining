#include <iostream>
using namespace std;

    void prosesfaktorial(int a);
        int b;
        int main()
{
    
    cout<<"masukkan bilangan yang akan difaktorialkan: ";
    cin>>b;
        prosesfaktorial(b); 
    }
        void prosesfaktorial (int a)
{
    int c = 0;
    long long hasil = 1 ;
        if( a <= 1 ){
    cout << 1 ;
   }else{
        for( c = 1 ; c <= a ; c++ ){
    hasil = hasil * c ;
    }
    
  }
  cout << "Hasil Faktorial adalah : " << hasil ;
}
    