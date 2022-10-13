#include <iostream>

using namespace std;

int main()
{
   cout << "muhammad ilham akbar, A11.2022.14109" << endl;
   cout << "  DAFTAR JURUSAN"<< endl;
   cout << "1.TEKNIK INFORMATIKA" << endl;
   cout << "2.SISTEM INFORMASI" << endl;
   cout << "3.DESAIN KOMUNIKASI VISUAL" << endl;
   cout << "  KATEGORI MAHASISWA"<< endl;
   cout << "1.SEMESTER 1-2 = FRESHMAN" << endl;
   cout << "2.SEMESTER 3-4 = SOPHOMORE" << endl;
   cout << "3.SEMESTER 5-6 = JUNIOR" << endl;
   cout << "4.SEMESTER 7-8 = SENIOR" << endl;




   int a,b;
   cout << "masukkan jurusan anda (No 1-3)= ";
   cin >> a;
   if (a == 1) {
        cout << "jurusan anda TEKNIK INFORMATIKA" << endl;
   }
   if (a == 2) {
        cout << "jurusan anda SISTEM INFORMASI" << endl;
   }
   if (a == 3) {
        cout << "jurusan anda DESAIN KOMUNIKASI VISUAL" << endl;
   }
   cout << "masukkan semester anda (No 1-8)=" ;
   cin >> b ;
   if (b <= 2) {
        cout << "anda adalah FRESHMAN" << endl;
   }
   if (b > 2 && b < 5) {
        cout << "anda adalah SOPHOMORE " << endl;
   }
   if (b == 5 && b == 6) {
        cout << "anda adalah JUNIOR" << endl;
   }
   if (b > 6 && b <= 8) {
        cout << "anda adalah SENIOR" << endl;
   }
   if (b >= 9) {
        cout << "anda adalah CALON DOSEN SEJATI" << endl;
   }

    return 0;
}
