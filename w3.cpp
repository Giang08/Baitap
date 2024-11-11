#include <iostream>
#include <math.h>
using namespace std;

//Bai 1
int fibonacci( int h)
{
    if (h == 1 || h == 2) 
        return 1;
     else 
        return fibonacci (h - 1) + fibonacci (h - 2);
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

int Tong (int m)
{
    if (m > 0) {
    long long s;
    s = (m * (m + 1) * (2*m + 1)) / 6;
    return s;
    } else {
        return 0;
    }
    
}

int GiaiThua (int n) {
    int s = 1;
        for (int i = 1; i <= n; i++) 
        s *= i;
        return s;
}

int ToHop (int n, int k) {
    if (n == k || k == 0) 
    return 1;
    else {
        return (GiaiThua(n) /  (GiaiThua(k) * GiaiThua(n - k))); 
    }
}


int main ()
{
    int h;
    cout << "Nhap so h: \n";
    cin >> h;
    long long fibo = fibonacci (h);
    cout << "So fibonacii thu " << h <<" la " << fibo <<"\n";
    int a,b;
    cout <<"Hay nhap 2 so a,b: ";
    cin >> a;
    cin >> b;
    int ucln = UCLN(a,b);
    int bcnn = BCNN(a,b);
    cout <<"UCLN cua 2 so la: " << ucln <<"\n";
    cout <<"BCNN cua 2 so la: " << bcnn <<"\n";
    int m;
    cout << "Nhap so m: \n";
    cin >> m;
    int tong = Tong(m);
    cout << "Tong binh phuong lien tiep cua " << m << " so la: " << tong << endl;
    int n,k;
    cout <<"Nhap so n va k: " << endl;
    cin >> n;
    cin >> k;
    cout <<"To hop chap " << k <<" cua " << n <<" la: ";
    int TH = ToHop(n,k);
    cout << TH << endl;

    
 
}