#include <iostream>
using namespace std;
int main () {
	float phi, result; int r , t; // float = bilangan desimal dan int bilangan bulat
	cout << " PERHITUNGAN LUAS LINGKARAN " << endl;
	cout << " SOAL NOMOR 1" << endl;
	cout << " berapa luas lingkaran dengan jari- jari sesuai dengan yang diinputkan? "<< endl;
	cout << " penyelesaian :" << endl;
	phi = 3.14; // Nilai mutlak phi = 3.14
	cout << " phi = " << phi; 
	cout << " r=  "; 
	cin >> r; // Input nilai jari2
	cout << " L= phi * r * r " << endl;
	cout << " L = 3.14 * " << r << " * " << r <<  endl;
	result = phi * r * r; // Proses perhitungan luas lingkaran
	cout << " L = " << result << endl ;
	cout << " jadi hasil perhitungan luas lingkaran tersebut adalah " << result << "cm" << endl;
	
	 
	cout << " PERHITUNGAN LUAS LINGKARAN  " << endl;
	cout << " SOAL NOMOR 2" << endl;
	cout << " berapa luas lingkaran dengan jari jari 30 cm ? "  << endl;
	cout << " penyelesaian :" << endl; 
	cout << " phi = " ;  cin >> phi ;
	cout << " r= " ; cin >> r ; 
	cout << " L= phi * r * r " << endl;
	cout << " L = 3.14 * " << r << " * " << r <<  endl;
	result = phi * r * r; 
	cout << " L = " << result << endl ;
	
	
	cout << " perhitungan Volume Tabung " << endl;
	cout << " SOAL NOMOR 1 " << endl;
	cout << " Berapa volume tabung dengan jari- jari dan tinggi yang diinputkan? " << endl;
	cout << " penyelesaian : " << endl;
	phi = 3.14 ;
	cout << " phi = " << phi ;
	cout << " r = " ;
	cin >> r ;
	cout << " t = " ;
	cin >> t ;
	cout << " phi * r * r * t " << endl ;
	cout << " v = 3.14 * " << r << " * " << r << " * " << t << endl;
	result = phi * r * r * t ;
	cout << " v = " << result << endl ;
	cout << " jadi hasil volume tabung adalah " << result << "cm" << endl ; 
	
	
	cout << " PERHITUNGAN VOLUME TABUNG " << endl ;
	cout << " SOAL NOMOR 2 " << endl ;
	cout << " berapa volume tabung jika jari jari 15cm dan tinggi 30cm ?  " << endl ;
	cout << " penyelesaian : " << endl ;
	cout << " phi = ";
	cin >> phi ;
	cout << " r = " ;
	cin >> r;
	cout << " t = " ;
	cin >> t ;
	cout << " phi * r * r * t " << endl ;
	cout << " v = 3.14 * " << r << " * " << r << " * " << t << endl ;
	result = phi * r * r * t ;
	cout << " v = " << result << endl ;
	cout << " jadi hasil volume tabung adalah " << result << " cm " << endl ;
	
	
	return 0;
}

