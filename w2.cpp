#include <iostream>
#include <string>
using namespace std;
bool Lasonguyento(int number) {
    if (number <= 1) return false;
    for (int i = 2; i <= number / 2; ++i) {
        if (number % i == 0) return false;
    }
    return true;
}

bool Mangdoixung (int a[], int n) {
    for (int i = 0; i < n/2; i++) {
        if (a[i] != a[n-i-1]) {
            return false;
    }
    } return true;
}

bool Mangtangdan (int a[], int n) {
    for (int i = 0; i <= n; i++) {
        if (a[i] < a[i-1]) {
            return true;
        }
    } return false;
}


void Bai1 ()
{
    //Tìm giá trị nhỏ nhất và lớn nhất trong mảng
    int dayso[] ={2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    int n = sizeof (dayso) / sizeof (dayso[0]);
    int min = dayso[0];
    int max = dayso[0];
    for (int i=1 ; i < n ; ++i)
    {
        if(dayso[i] < min){
        min = dayso[i];
        }
        if(dayso[i] > max){
        max = dayso[i];
        }
        }
    cout << "Gia tri nho nhat la: " << min <<"\n";
    cout << "Gia tri lon nhat la: " << max <<"\n";
    cout << endl;
}

void Bai3 ()
{ 
    //Tìm số nguyên tố trong mảng
   
    int dayso[] ={2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    int n = sizeof (dayso) / sizeof (dayso[0]);
    cout << "So nguyen to la: "; 
    for (int i = 0; i <= n; i++ ){
        if(Lasonguyento(dayso[i])) {
           cout << dayso[i] << " ";
           
        }
    }
}

void Bai4 ()
{
    //Tìm số trung bình cộng của tất cả các số trong mảng
    int dayso[] ={2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    int n = sizeof (dayso) / sizeof (dayso[0]);
    cout << "So trung binh cong cua mang la: " << (dayso[0] + dayso[1] + dayso[2] + dayso[3] + dayso[4] + dayso[5] + dayso[6] + dayso[7] + dayso[8] + dayso[9])/10;
    cout << endl;

}

void Bai5 () 
{
int n = 7;
int a[7] = {1,2,3,4,3,2,1};
if (Mangdoixung(a,n)) {
    cout <<"Day la mang doi xung.";
} else {
    cout <<"Day khong phai ma doi xung.";
}
}

void Bai9 ()
{
    int n = 10;
    int a[] ={1,2,3,4,5,6,7,8,9,10};
    if (Mangtangdan(a,n)) {
        cout <<"Day la mang tang dan.";
    } else {
        cout <<"Day khong phai mang tang dan.";
    }
}

int main()
{
    Bai9 ();
}