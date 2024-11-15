#include <iostream>
#include <math.h>
using namespace std;

void Bai1 ()
{
    //Tìm giá trị trung bình cộng của 4 số.
    cout <<"Nhap 4 so\n";
   float a,b,c,d,trbinh;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    trbinh =(a+b+c+d)/4;
    std::cout <<"Trung binh cong cua 4 so la:" << trbinh <<"\n";
}

void Bai2 ()
{
   //Cho người dùng nhập 3 số. Sau đó in ra số lớn nhất.
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
}

void Bai3 ()
{
 //Chuyển đổi độ C thành độ K và độ F.
    cout <<"Hay nhap do C\n";
    double C,F,K;
    cin >> C;
    F=(C * 1.8 + 32);
    K=(C + 273);
    cout <<"Do F cua ban la:" << F <<"\n";
    cout <<"Do K cua ban la:" << K <<"\n";

}
 
void Bai4 ()
{
//Đảo ngược số. Ví dụ, số đảo ngược của 123 là 321.
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
}

void Bai5 ()
{
    //Nhập một số làm số hàng (hay độ rộng theo chiều ngang) của tam giác rồi sau đó vẽ tam giác sao với độ rộng đó và vẽ tam giác đều
    int rows;
    cout << "Nhap vao so hang: ";
    cin >> rows;

    for (int i = 1; i <= rows; i++) {
        // In khoang trang
        for (int j = rows - i; j > 0; j--) {
            cout << " ";
        }
        // In cac dau sao
        for (int k = 1; k <= (2 * i - 1); k++) {
            cout << "*";
        }
        cout << endl;
    }
}

void Bai7 ()
{
    //Nhập một số nguyên n. Tính tổng của n số lẻ đầu tiên trong dãy số nguyên
    int N;
    int sum;
    cout<< "Nhap so nguyen duong N "; cin >> N;
    for (int i = 0; i<N; i++)
    sum += (i*2 +1);
    cout <<"Tong cac so le dau tien la: " << sum << "\n";
}

void Bai9 ()
{
      //Tìm ước chung lớn nhất và bội chung nhỏ nhất của hai số.
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
}

void Bai11 ()
{
    //Nhập số N, hãy in N số đầu tiên trong dãy Fibonacci.
    int N;
    cout << "Nhap so N: ";
    cin >> N;
    if (N <= 0) {
        cout << "Loi cu phap ";
    } else if (N == 1) {
        cout <<"1";
    }  else {
        cout << N <<" so dau tien cua day fibonacci la: ";
        long long fn, f0 = 0, f1 = 1;
        cout << f1 << "  ";
        for (int i = 2; i <= N; i++){
            
            fn = f0 + f1;
            f0 = f1;
            f1 = fn;
            
            cout << fn << "  ";
        }
        
    }
    
}

void Bai12 ()
{
    //Nhập số năm, in ra kết quả đây là năm nhuận hay không.
 int year;
 cout << "Nhap nam cua ban: "; cin >> year;
 if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0){
    cout <<"Day la nam nhuan. ";
 } else {
    cout << "Day ko phai nam nhuan. ";
 }
 cout << endl;
}

void Bai13 ()
{
//Nhập 3 số, kiểm tra đây có phải là 3 góc của tam giác hay không.
    int m,n,q;
    cout<<"Nhap 3 so: ";
    cin>> m >> n >> q;
    if (m + n + q == 180) {
        cout<< "Day la 3 goc cua 1 tam giac\n";
    } else {

    cout<<"Day ko phai 3 goc cua 1 tam giac\n";
    } 
}
    
void Bai14 ()
{
//Nhập số nhỏ hơn hoặc bằng 10. In giá trị của số vừa nhập bằng chữ
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
}

void Bai15 ()
{
//Nhập số tháng (nhỏ hơn 12), in ra tổng số ngày trong tháng đó.
    int  month;
    cout << "Nhap thang cua ban: "; cin >> month;
    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        cout << "Thang " << month <<"co 31 ngay\n";
        break;
        case 2:
        cout << "Thang " << month <<"co 28 ngay\n";
        break;
        case 4:case 6:case 9: case 11:
        cout << "Thang " << month <<"co 30 ngay\n";
        break;
        default :
        cout <<"Khong nhan dien ";
        break;
    }
}

void Bai16 ()
{
    //Viết chương trình cho nhập 2 số và 1 phép toán. Hãy in ra kết quả của phép toán đó
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
}

void Bai17 ()
{
    //Nhập một chuỗi bất kì, nếu nhập exit hoặc EXIT hoặc Exit thì thoát chương trình.
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
}

void Bai18 ()
{
    int n;
    while (true) {
        cout << "Vui long nhap so n, n > 0: " << endl;
        cin >> n;
        if (n > 0) {
            break;
        } else {
            cout << "Vui long nhap lai." << endl;
            continue;
        }
    }
    
    cout <<"Day so chia het cho 5 tu 1 den " << n <<" la: ";
    for (int i = 1; i <= n; i++) {
        if (i % 5 == 0) {
            cout << i <<" ";
        }
    }
    
}

void Bai19 ()
{
//Viết chương trình kiểm tra số nhập vào có phải là số hoàn hảo hay không
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
}

void Bai20 ()
{
    //Nhập số nguyên dương n. Hãy viết chương trình tính giai thừa của n
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
}

void Bai21 ()
{
    //Tìm nghiệm phương trình bậc 2: ax2 + bx + c = 0
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
}

void Bai22 ()
{
    //Nhập một số. Nếu số đó là số nguyên tố thì thoát chương trình, nếu không cho người dùng nhập lại.
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

void Bai23 ()
{
    //Cho người dùng nhập một số dương n. In ra số chẵn từ 0 đến n.
        cout<< "Hay nhap so cua ban: ";
        int F;
        cin >> F;
        cout << "Cac so chan tu 0 den " << F <<"la: ";
        for (int i=0; i <= F; i+=2)
        {
            cout << i << " ";

        } 
}

void Bai24 ()
{
    //Viết chương trình nhập một số n (0<n<10), sau đó in ra màn hình bảng cửu chương n.
        int m;
        int tich;
        cout <<"Hay nhap vao mot so: "; cin >> m;
        cout <<"Bang cuu chuong cua " << m <<" la: " << endl;
        for (int i = 1; i <= 10; i++) {
            tich = m * i;
            cout << m << "*" << i <<" = " << tich << endl;
        } 
        
        
        
}

void Bai26 ()
{
//Viết chương trình nhập một số n > 0. Sau đó in ra ước số n.
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
}


int main()
{
    Bai18 ();
}
    
    










 

