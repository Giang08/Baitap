#include <iostream>
#include <string>
using namespace std;
int main()
{
   // Bai 9,10
 int a,b;
 int tich = 1;
 cout << "Hay nhap hai so a,b : "; cin >> a >> b;
 tich = a * b;
 while (a != b) {
    if (a > b){
        a = a - b;
    } else {
        b = b - a;
    }
 }
 cout << "UCLN cua 2 so a, b la: " << a << endl;
 cout << "BCNN cua 2 so a, b la: " << tich / a << endl;
 

 // Bai 12
 int year;
 cout << "Nhap nam cua ban: "; cin >> year;
 if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    cout <<"Day la nam nhuan. ";
 } else {
    cout << "Day ko phai nam nhuan. ";
 }
 cout << endl;


 //Bai 19
 int m;
 int tong = 0;
 cout << "Nhap mot so: ";
 cin >> m;
 for (int i = 1; i < m; i++){
   if (m % i == 0)
   tong += i;
 }
 if (tong == m){
   cout <<"Day la so hoan hao. ";
 } else {
   cout <<"Day khong phai so hoan hao. ";
 }
 cout << endl;

 //Bai 26
 int q;
 cout <<"Nhap mot so: ";
 cin >> q;
 if (q < 0) {
   cout << "Vui long nhap lai. ";
 } else {
   for (int i = 1; i <= q; i++){
      if (q % i == 0){
         cout << i <<" ";
      }
   }
   cout << endl;
 }

 
   //Bai 22
   while(true) {
      int number;
      cout << "Hay nhap mot so lon hon 0: ";
      cin >> number;
      if (number <= 0){
         cout <<"Vui long nhap lai so khac lon hon 0. \n";
         continue;
      }
   
   
   bool songuyento = true;
   for (int i=2; i < number; i++){
      if (number % i == 0){
         songuyento = false;
         break;
      }
   }
      if (songuyento) 
         cout << number << " la so nguyen to.\n";
      else 
         cout << number << " Khong la so nguyen to.\n ";

      if(songuyento) {
      cout << "Thoat chuong trinh ";
      break;
      } else {
         cout << "Vui long nhap lai so khac. \n";
      }

      
   }
}

