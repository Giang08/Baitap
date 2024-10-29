#include <iostream>
#include <math.h>
using namespace std;

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
    int a,b;
    cout <<"Hay nhap 2 so a,b: ";
    cin >> a;
    cin >> b;
    int ucln = UCLN(a,b);
    int bcnn = BCNN(a,b);
    cout <<"UCLN cua 2 so la: " << ucln <<"\n";
    cout <<"BCNN cua 2 so la: " << bcnn <<"\n";
    
 
}