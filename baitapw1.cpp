#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //Bai 1
    cout <<"Nhap 4 so\n";
   float a,b,c,d,trbinh;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    trbinh =(a+b+c+d)/4;
    std::cout <<"Trung binh cong cua 4 so la:" << trbinh <<"\n";
    //Bai 2
    float e,f,g,max,min;
    cout <<"Nhap so e "; cin >> e;
    cout <<"Nhap so f "; cin >> f;
    cout <<"Nhap so g "; cin >> g;
    max=e;
    if (f>max){
        max=f;
    } if (g>max){
        max=g;
    }
    cout <<"So lon nhat trong ba so la:" << max <<"\n";
    //Bai 3
    cout <<"Hay nhap do C\n";
    double C,F,K;
    cin >> C;
    F=(C * 1.8 + 32);
    K=(C + 273);
    cout <<"Do F cua ban la:" << F <<"\n";
    cout <<"Do K cua ban la:" << K <<"\n";

    //Bai 4
    // khai báo biến số nguyên M
    int M;
    // xuất ra màn hình và nhập giá trị M
    cout <<" Nhap vao so bat ki M "; cin>>M;
    // xuất ra màn hình
    cout <<" So dao nguoc cua M la: \n";
    // tiếp tục chạy vòng lặp while khi M khác giá trị 0
    while(M!=0)
    {
        //lấy số cuối của M và in ra
        cout<< M%10;
          
        //bỏ đi số cuối cùng của M
        // lặp đi lặp lại sẽ cho số của M đi từ trái sang sẽ thành 1 số đảo ngược
        M/=10;
    } 

    cout << endl;

    //Bai 13
    int m,n,q;
    cout<<"Nhap 3 so: ";
    cin>> m >> n >> q;
    if (m + n + q == 180) {
        cout<< "Day la 3 goc cua 1 tam giac\n";
    } else {

    cout<<"Day ko phai 3 goc cua 1 tam giac\n";
    } 
    
    //Bai 14
    int so;
    cout <<"Nhap mot so: "; cin >> so;
    
        switch(so){
        case 1:
        cout <<"Mot\n";
        break;
        case 2:
        cout <<"Hai\n";
        break;
        case 3:
        cout <<"Ba\n";
        break;
        case 4:
        cout <<"Bon\n";
        break;
        case 5:
        cout <<"Nam\n";
        break;
        case 6:
        cout <<"Sau\n";
        break;
        case 7:
        cout <<"Bay\n";
        break;
        case 8:
        cout <<"Tam\n";
        break;
        case 9:
        cout <<"Chin\n";
        break;
        case 10:
        cout <<"Muoi\n";
        break;
        default:
        cout <<"Khong ho tro\n";
        break;
    }

    //Bai 15
    int  month;
    cout << "Nhap thang cua ban: "; cin >> month;
    switch(month) {
        case 1:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        case 2:
        cout << "Thang " << month <<"co 28 ngay\n";
        break;
        case 3:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        case 4:
        cout << "Thang " << month <<"co 30 ngay\n";
        break;
        case 5:
        cout << "Thang " << month <<"co 31 ngay\n";
        break; 
        case 6:
        cout << "Thang " << month <<"co 30 ngay\n";
        break;
        case 7:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        case 8:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        case 9:
        cout << "Thang " << month <<"co 30 ngay\n";
        break;
        case 10:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        case 11:
        cout << "Thang " << month <<"co 30 ngay\n";
        break;
        case 12:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        default :
        cout <<"Khong nhan dien ";
        break;
    }

    //Bai 11
    int N;
    cout << "Nhap so N: ";
    cin >> N;
    if (N < 0) {
        cout << "Vui long nhap lai: ";
    } else if (N == 0) {
        cout <<"0";
    } else if (N == 1) {
        cout <<"1";
    } else {
        cout << N <<" so dau tien cua day fibonacci la: ";
        long long fn, f0 = 0, f1 = 1;
        for (int i = 2; i <= N; i++){
            
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            
            cout << fn << "  ";
        }
        
    }
    return 0;

    
}
    
    










 

