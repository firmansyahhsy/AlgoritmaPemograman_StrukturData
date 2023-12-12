#include <iostream>
using namespace std;
//int pangkat ( int q, int w){
//	int result = q;
//	for (int i=1; i<w ;i++){
//		result= result*q;
//	}
//	return result;
//}
//int main () {
//	int q;
//	int w;
//	//string ulang 
//	// do{
//	cout << "masukan Angka :";
//	cin >> q;
//	cout << "masukan pangkat :";
//	cin >> w;
//	cout << endl;
//	cout <<" result  " <<q<< " dipangkat dengan  "<<w<< " = "<<pangkat(q,w) << endl;
//	//cout << "\nApakah  anda ingin mengulang program [y/t] : ";
//	// cin >> ulang ;
//	//system("cls");
//	//while (ulang=="y");
//	//cout << " PROGRAM SELESAI";
//		cin.get();
//		return 0;
//}


int main (){
	int a;
	int *b;
	b=&a;
	string ulang;
	do{
		
		cout << " masukan bilangan : ";
		cin >> a;
		cout << endl;
		cout << a<< " ";
		if (a%2==0){
			cout << " "<<a+1;
		}
			else {
				cout << a;
			}
			cout <<" "<<*b;
			cout << "\nApakah ingin mengulang program [y / t} : ";
			cin >> ulang;
			system("cls");
			
		}
		while (ulang=="y");
		cout <<" PROGRAM SELESAI"; 
	}


