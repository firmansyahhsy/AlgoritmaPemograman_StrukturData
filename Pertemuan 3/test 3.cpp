# include <iostream>
using namespace std;
int main () {
	string nama;
	int a, b, c, h;
		cout << " nama anda adalah : " ;
		cin >> nama ;
		cout << " nilai pertandingan 1 : " ;
		cin >> a ;
		cout << " nilai pertandingan 2 : " ;
		cin >> b ;
		cout << " nilai pertandingan 3 : " ;
		cin >> c ;	
 	h = (a+b+c)/3 ;
 		cout << " nilai rata rata adalah : " << h << endl;
 		
		 if ( h >= 85 ) {
 			cout <<" selamat kepada "<< nama << " mendapat hadiah komputer core i5 " << endl ;
		}
		else if ( h >= 70 ) {
			cout <<" selamat kepada " << nama << " mendapat hadiah uang sebesar Rp. 2.500.000 " << endl ;
		}
		else {
			cout <<" selamat kepada " << nama << " mendapat hadiah hiburan " << endl ;
		}
		
		cout << " ======================================================================= " << endl ;
		
	
		cout << " nama anda adalah : " ;
		cin >> nama ;
		cout << " nilai pertandingan 1 : " ;
		cin >> a ;
		cout << " nilai pertandingan 2 : " ;
		cin >> b ;
		cout << " nilai pertandingan 3 : " ;
		cin >> c ;	
 	h = (a+b+c)/3 ;
 		cout << " nilai rata rata adalah : " << h << endl;	
		
		switch (h){
			case 85 ...100 : 
				cout<<"\nselamat kepada "<< nama << " mendapat hadiah komputer core i5";
			break ;
			case 70 ...84 :
				cout<<"\nselamat kepada " << nama << " mendapat hadiah uang sebesar Rp. 2.500.000 ";
			break ;
			default : 
				cout<<"\nselamat kepada " << nama << " mendapat hadiah hiburan ";
		}
		
		 return 0;
}
