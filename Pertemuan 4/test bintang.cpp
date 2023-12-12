#include <iostream>
using namespace std;
int main () { 

int kolom, skolom;
cout << "masukan jumlah kolom: " ;
	cin >> kolom ;
	skolom = kolom / 2 ;
	
	for ( int a = 1; a<= skolom ; a++) {
		for ( int b = 1 ; b <= skolom ; b++) {
			if ( b - 1 <= skolom - a ) {
				cout << "   " ;
			} else {
				cout << "*  " ;
			}
		}
		for ( int b = 1 ; b <= skolom ; b++) {
			if ( b >= a ) {
				cout << "   " ;
			} else {
				cout << "*  " ;
			}
		}
		cout << endl;
	}
	for (int a= 1; a <= skolom ; a++) {
		for ( int b = 1 ; b <= skolom ; b++) { 
			if ( b >= a + 1) {
				cout << "*  " ;
			} else {
				cout << "   " ;
			}
		}
		for (int b= 1 ; b <= skolom ; b++) {
			if ( b <= skolom - a ) {
				cout << "*  " ;
			}else { 
				cout << "   " ;
			}
		}
	cout << endl ;
	} 
	
	return 0;
}
