#include <iostream>
using namespace std;
int main () {
	
	int a[3][3];
	int jum_baris, jum_kolom, i,j;
	
	for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << "Baris " <<i+1<<", kolom "<<j+1<< " = ";
      cin >> a[i][j]; 
}
cout << endl ;
}
	for(i = 0; i < jum_baris ; i++){
    for(j = 0; j < jum_kolom; j++){
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
	
	cout << " Hasil penjualan barang " << endl;
	cout << " ========================" << endl;
	cout << " No Nama Barang   2001   2002   2003" <<endl;
	cout << " 1  printer  " << endl;
	cout << " 2  mouse    " << endl;
	cout << " 3  kabel data " << endl;
	
	return 0;
}
