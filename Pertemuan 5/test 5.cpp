#include <iostream>
using namespace std;
int main () {
	
	int a, b, c , bill ;
	
	cout << " soal 1" ;
	cout << endl << endl ;
	string lagi ;
	lagi = "y" ;
	atas :
	cout << " masukan bilangan : " ;
	cin >> a ;
	
	b=  a % 2 ;
	
	cout << " nilai " << a << "  % 2 adalah " << b << endl   ;
	cout << " ingin hitung lagi ? [ y/t]: " ;
	cin >> lagi ;
	if (lagi == "y" || lagi == "Y" ){
	goto atas; }
	
	else{
		cout << " selesai " ;
	} 
	
	cout << endl << endl ;
	cout << " soal 2";
	
	cout << endl << endl ;
	a= 1;
	b= 0;
	while ( a <= 20 ) {
		b = b + a ;
		cout << a ;
		if ( a < 19 ) {
			cout << " + " ;
		}
		a= a + 2 ;
	}
	cout << " = " << b ;

		cout << endl << endl ;
		cout << " soal 3";
		cout << endl << endl ;
	a= 2;
	b= 0;
	while ( a <= 20 ) {
		b = b + a ;
		cout << a ;
		if ( a < 20 ) {
			cout << " + " ;
		}
		a= a + 2 ;
	}
	cout << " = " << b ;
	
	cout << endl << endl ;
	cout << " soal 4" ;
	cout << endl << endl ;
	
	a= 3;
	b= 2;
	c= 1;
	
	cout << " BIL-A  | BIL-B  | BIL-C  " << endl ;
	cout << " ======================================" << endl ; 
		for ( bill = 1 ; bill <= 10 ; ++bill ) {
	a= a + b ;
	b= b + c ;
	c= c + 2 ;
		cout << a << "   |   " << b << "   |   " << c << "   |   " << endl ;
		if ( c== 13) {
		break ;
		}
	}
}
	


