#include <iostream>
#include <iomanip>
 
using namespace std;
 
int main()
{
  cout << "##  Program C++ Input Matriks 2 Dimensi ##" << endl;
  cout << "==========================================" << endl;
  cout << endl;
 
  int matriks[100][100];
  string barang;
  int jum_baris, jum_kolom, i, j;
 
 
  // proses input array
  for(i = 0; i < 3 ; i++){
 cout << "input nama barang ";
 cin >> barang ;
    for(j = 0; j < 3 ;j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> matriks[i][j];
    }
    cout << endl;
  }
 cout << " Hasil penilaian barang " << endl;
  cout << " ============================" << endl;
  cout << " No | nama barang  2001 2002 2003"<< endl;
  cout << " ============================" << endl;
  
 
  // menampilkan array
  for(i = 0; i < 3 ; i++){
  	cout << i << "\t"<< barang ;
    for(j = 0; j < 3; j++){
      cout << setw(3) << " \t" << matriks[i][j];
    }
    cout << endl;
  }
 
  return 0;
}
