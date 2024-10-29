#include <iostream>
#include <math.h>
using namespace std;

//Bai 1
int fibonacci( int n)
{
    if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci (n - 1) + fibonacci (n - 2);
    } return 0;
}


//Bai 2,3
int UCLN (int a, int b)
{
    int c = a % b;
    if (c == 0) {
        return b;
    } else {
        return UCLN(b,c);
    }
}


int BCNN (int a, int b)
{
    return (a * b) / UCLN(a,b);
}




int main ()
{
    int n;
    cout << "Nhap so n: \n";
    cin >> n;
    long long fibo = fibonacci (n);
    cout << "So fibonacii thu " << n <<" la " << fibo <<"\n";
    int a,b;
    cout <<"Hay nhap 2 so a,b: ";
    cin >> a;
    cin >> b;
    int ucln = UCLN(a,b);
    int bcnn = BCNN(a,b);
    cout <<"UCLN cua 2 so la: " << ucln <<"\n";
    cout <<"BCNN cua 2 so la: " << bcnn <<"\n";
    
 
}