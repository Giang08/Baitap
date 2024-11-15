#include <iostream>
#include <math.h>
using namespace std;

//Viết hàm tính số Fibonacci dùng phương pháp đệ quy
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

//Tính tổng bình phương liên tiếp của một số n
int Tong (int m)
{
    if (m > 0) {
    return m*m + Tong(m-1);
    } else {
    return 0;
    }
    
}

//Tính tổ hợp chập k của n phần tử:
int GiaiThua (int n) {
    if (n>0) {
        return n + GiaiThua(n-1);
    } else {
        return 0;
    }
}

int ToHop (int n, int k) {
    if (n == k || k == 0) 
    return 1;
    else {
        return (ToHop (n-1, k-1) + ToHop (n-1,k)); 
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