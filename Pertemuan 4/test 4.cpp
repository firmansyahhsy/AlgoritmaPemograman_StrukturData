#include <iostream>
using namespace std;
int main () {
	
	cout << "perulangan meningkat" << endl ;
	for ( int a = 1; a <= 10 ; a++  ) {
		cout << a << endl ;
		
	}
	cout << endl ;
	cout << "perulangan menurun " << endl ;

	for ( int a = 10 ; a >= 1 ; a-- ) {
		cout << a << endl ;
	}
	
	cout << endl ;
	cout << " perulangan ganjil " << endl ;
	
	for ( int a = 1; a <= 10 ; a = a + 2 ) {
		cout << a << endl ;
	}
	
	cout << endl ;
	cout << " perulangan genap " << endl ;
	
	for ( int a = 2 ; a <=10 ; a = a + 2 ) {
		cout << a << endl ;
	}
	
	cout << endl ;
	cout << "pengulangan " << endl ;
	
	for ( int a = 1; a <= 5 ; a++ ){
		for ( int b = 1 ; b <= 5 ; b++){
			cout << a;
		}
		cout << endl ;
	}
	
	int angka ;
	int hasil = 1 ;
	
	cout << endl;
	cout << " masukan suatu bilangan: " ;
		cin >> angka ;
		
	// karena prima dimulai dari 2, maka angka dibawah 2 pasti bukan prima 
	if ( angka < 2 ) {
		hasil = 0;
	}	 else {
		// jika angka bisa dibagi oleh kelipatan 2 atau kelipatan 3 maka bukan prima 
		for ( int a = 2 ; a * a <= angka ; ++a) {
			if ( angka % a == 0 ) {
				hasil = 0;
				break ;
			}
		}
	}
	
	if ( hasil == 1 ) {
		
		cout << angka << " termasuk bilangan PRIMA." << endl ; 
		
	} else {
		
		cout << angka << " bukan termasuk bilangan PRIMA." << endl ;
		
	}
	
	cout << endl ;

	int kolom, skolom;
cout << "masukan jumlah kolom: " ;
	cin >> kolom ;
	skolom = kolom / 2 ;
	
	for ( int a = 1; a<= skolom ; a++) {
		for ( int b = 1 ; b <= skolom ; b++) {
			if ( b - 1 <= skolom - a ) {
				cout << "*  " ;
			} else {
				cout << "   " ;
			}
		}
		for ( int b = 1 ; b <= skolom ; b++) {
			if ( b >= a ) {
				cout << "*  " ;
			} else {
				cout << "   " ;
			}
		}
		cout << endl;
	}
	for (int a= 1; a <= skolom ; a++) {
		for ( int b = 1 ; b <= skolom ; b++) { 
			if ( b >= a + 1) {
				cout << "   " ;
			} else {
				cout << "*  " ;
			}
		}
		for (int b= 1 ; b <= skolom ; b++) {
			if ( b <= skolom - a ) {
				cout << "   " ;
			}else { 
				cout << "*  " ;
			}
		}
	cout << endl ;
	} 
	
	return 0;
}
