#include <iostream>
#include <string>
using namespace std;
int main()
{
    //Bai 9
    int k, l, m, p, o;
    cout <<"Hay nhap mot day so: "; cin >> k >> l >> m >> p >> o;
    int daysotangdan[] = {k, l, m, p, o};
    int n = sizeof (daysotangdan) / sizeof (daysotangdan[0]);
    for (int i = 0; i < n; i++)
    {
    if (daysotangdan[i] > daysotangdan[i+1])
    {
        cout <<"Day la day so tang dan. ";
    } else {
        cout << "Day khong phai day so tang dan. ";
    }
    cout << endl;
}


   //Bai 13
   int songuyen[] ={ 1, 5, 10, 50, 100, 500, 1000 };
   string solama [] = "I, V, X, L, C, D, M" ;
}