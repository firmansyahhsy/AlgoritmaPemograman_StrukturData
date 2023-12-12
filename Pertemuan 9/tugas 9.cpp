//#include <iostream>
//using namespace std;
//
//const float phi = 3.14; 
//
//float hitungVolumeTabung(int r, int t) {
//    float volume;
//    volume = phi * r * r * t;
//    return volume;
//}
//
//void volumeTabung(int r, int t) {
//    float V = hitungVolumeTabung(r, t);
//    cout << "Volume tabung = " << V;
//}
//
//int main() {
//    int r, t;
//    char lagi;
//    do {
//        cout << "Menghitung Volume Tabung" << endl;
//        cout << "Masukkan Jari-Jari : ";
//        cin >> r;
//        cout << "Masukkan Tinggi : ";
//        cin >> t;
//        volumeTabung(r, t);
//        cout << endl;
//        
//        cout << "Ulang Lagi (y/n) : ";
//        cin >> lagi;
//        cout << endl;
//    } while (lagi == 'y' || lagi == 'Y');
//
//    return 0;
//}
//
//#include <iostream>
//using namespace std;
//
//const float phi = 3.14; // Konstanta phi untuk perhitungan lingkaran
//
//int hitungLuasLingkaran(int r){
//    int luas;
//    luas = phi * r * r;
//    return luas;
//}
//
//void luasLingkaran(int r){
//    int L = hitungLuasLingkaran(r);
//    cout << "Luas lingkaran = " << L;
//}
//
//int main() {
//    int r;
//    char lagi;
//    do {
//        cout << "Menghitung Luas Lingkaran" << endl;
//        cout << "Masukkan Jari-Jari : ";
//        cin >> r;
//        luasLingkaran(r);
//        cout << endl;
//        
//        cout << "Ulang Lagi (y/n) : ";
//        cin >> lagi;
//        cout << endl;
//    } while (lagi == 'y' || lagi == 'Y');
//
//    return 0;
//}

#include <iostream>
using namespace std;

int hitungluaspersegi(int sisi) {
    int Luas;
    Luas = sisi * sisi;
    return Luas;
}

void luasPersegi(int sisi) {
    int Luas = hitungluaspersegi(sisi);
    cout << "Luas Persegi = " << Luas;
}

int main() {
    int sisi;
    char lagi;
    do {
        cout << "Menghitung Luas Persegi" << endl;
        cout << "Masukkan Sisi : ";
        cin >> sisi;
        luasPersegi(sisi);
        cout << endl;

        cout << "Ulang Lagi (y/n) : ";
        cin >> lagi;
        cout << endl;
    } while (lagi == 'y' || lagi == 'Y');
    
    return 0;
}
