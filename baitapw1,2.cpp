#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    //Bai 7
    int N;
    int sum;
    cout<< "Nhap so nguyen duong N "; cin >> N;
    for (int i = 0; i<N; i++)
    sum += (i*2 +1);
    cout <<"Tong cac so le dau tien la: " << sum << "\n";

    //Bai 16
    int num1,num2;
    char pheptoan;    
    cout<<"Hay nhap 2 so va 1 phep toan: \n";
    cin >> num1 >> num2 >> pheptoan;
    
    switch(pheptoan) {
        case '+':
        cout<<"Ket qua la " << num1 + num2 <<"\n";
        break;
        case '-':
        cout<<"Ket qua la " << num1 - num2 <<"\n";
        break;
        case '*':
        cout<<"Ket qua la " << num1 * num2 <<"\n";
        break;
        case '/':
        cout<<"Ket qua la " << num1 / num2 <<"\n";
        break;
        default:
        cout<<"Sai phep toan\n";
        break;
    }
    //Bai 17
       string input;
       //Thực hiện vòng lặp liên tục cho đến khi gặp break:
       while (true) {
        cout << "Nhap mot chuoi bat ki: ";
        // đọc toàn bộ những gì người dùng nhập và lưu vào input:
        getline(cin, input);
        if (input == "exit" || input == "EXIT" || input == "Exit") {
            cout << "Thoat chuong trinh." << endl;
            break;
        }
    }
        cout << endl;

        //Bai 24
        int m;
        cout <<"Hay nhap vao mot so: "; cin >> m;
        int L= m * m;
        if (0<m<10){
            switch (m){
                case 1:
                cout <<"Day la bang cuu chuong so 1 " << "1" << " * " << "1" << " = " << L;
                break;
                case 2:
                cout <<"Day la bang cuu chuong so 2 " << "2" << " * " << "2" << " = " << L;
                break;
                case 3:
                cout <<"Day la bang cuu chuong so 3 " << "3" << " * " << "3" << " = " << L;
                break;
                case 4:
                cout <<"Day la bang cuu chuong so 4 " << "4" << " * " << "4" << " = " << L;
                break;
                case 5:
                cout <<"Day la bang cuu chuong so 5 " << "5" << " * " << "5" << " = " << L;
                break;
                case 6:
                cout <<"Day la bang cuu chuong so 6 " << "6" << " * " << "6" << " = " << L;
                break;
                case 7:
                cout <<"Day la bang cuu chuong so 7 " << "7" << " * " << "7" << " = " << L;
                break;
                case 8:
                cout <<"Day la bang cuu chuong so 8 " << "8" << " * " << "8" << " = " << L;
                break;
                case 9:
                cout <<"Day la bang cuu chuong so 9 " << "9" << " * " << "9" << " = " << L;
                break;
                default :
                cout <<"Khong the ho tro";
                break;
            }
        }
        cout << endl;


        //Bai 21
        int a,b,c;;
        cout << "Nhap phuong trinh bac 2: "; cin  >> a; cout <<"x^2" << "+";
        cin >> b; cout <<"x" << "+";
        cin >> c;
        int delta= b*b - 4*(a*c);
        int x1,x2,x3;
        x1 = (-b + sqrt(delta))/ 2*a;
        x2 = (-b - sqrt(delta))/ 2*a;
        x3 = -b/2*a;
        if(delta > 0){
            cout << "Nghiem cua ban la: " << x1 << "va " << x2;
        } else if (delta == 0){
            cout <<"Nghiem kep cua ban la x1 = x2 = " << x3;
        } else {
            cout << "Phuong trinh vo nghiem.";
        }
        cout << endl;


        //Bai 23
        cout<< "Hay nhap so cua ban: ";
        int F;
        cin >> F;
        cout << "Cac so chan tu 0 den " << F <<"la: ";
        for (int i=0; i <= F; i+=2)
        {
            cout << i << " ";

        } return 0;

   

}