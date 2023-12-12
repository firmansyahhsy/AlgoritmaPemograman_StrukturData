#include <iostream>
#include<conio.h>
using namespace std;
struct mhs{
	char nama[20],nim[10],matkul[10];
	int sks;
};
struct mhs bayar[2];
int main()
{
	int var, tetap;
	for (int i=0; i<2; i++)
	{
		//input data
		cout<<"nama mahasiswa\t= "; cin>>bayar[i].nama;
		cout<<"nim\t\t= "; cin>>bayar[i].nim;
		cout<<"mata kuliah\t= "; cin>>bayar[i].matkul;
		cout<<"jumlah sks\t= "; cin>>bayar[i].sks;
		if(bayar[i].sks==0)
		{
			tetap=200000;
			var=bayar[i].sks*200000;
		 } 
		 else if (bayar[i].sks==2)
		 {
		 	tetap=250000;
		 	var=bayar[i].sks*250000;
		 }
		 cout<<" ";
		 //output data
		 cout<< "\n\n-----------------------\n";
		 cout<< "		output		";
		 cout<< "\n-------------------------\n";
		 cout<<"\nNama mahasiswa\t\t= "<<bayar[i].nama;
		 cout<<"\nNim\t\t\t= "<<bayar[i].nim;
		 cout<<"\Mata kuliah\t\t= "<<bayar[i].matkul;
		 cout<<"\nJumlah sks\t\t= "<<bayar[i].sks;
		 cout<<"\nSPP tetap\t\t= "<<tetap;
		 cout<<"\nSPP variable\t\t= "<<var;
		 cout<<"\n\n-------------------------";
		 cout<<endl<<endl;
	}
	getch();
}
