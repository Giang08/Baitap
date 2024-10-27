#include <iostream>
using namespace std;


//Bai 8

bool Lasodoixung(int number) {
    int sobandau = number, sodao = 0;
    while (number != 0) {
        sodao = sodao * 10 + number % 10;
        number /= 10;
    }
    return sobandau == sodao;
}

int main() {
    int N;
    cout << "Nhap vao so can kiem tra: ";
    cin >> N;

    if (Lasodoixung(N)) {
        cout << "Day la so doi xung." << endl;
    } else {
        cout << "Day khong phai so doi xung." << endl;
    }

    cout << endl;


    //Bai 20
    int n;
    cout << "Hay nhap so n: ";
    cin >> n;
    int giaithua = 1;
    if (n < 0){
        cout << n << endl;
    } else {
        for (int i = 1;i <= n; i++){
            
            giaithua *= i;
            cout << endl;
        }
       cout << n <<"! = " << giaithua << endl;
    }


    while(true) {
        cout <<"Hay nhap mot so lon hon 0: ";
        int kk;
        cin >> kk;
        if (kk <= 0) {
        cout <<"Vui long nhap lai.\n";
        continue;
    }
    
    
    for (int i = 1; i <= kk; ++i) {
        if (i % 5 == 0) {
            cout << i << " ";
            
        }
    }
    return 0;
}
}










  
