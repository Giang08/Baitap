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

bool DayTangDan (int N[], int n) {
    //n la kich thuoc mang
    for (int i = 0; i < n - 1; i++) {
        if (N[i] > N[i+1]) 
            return false;
    }
    return true;
}





void Bai1 ()
{
    //Bai 1,2
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
    //Bai 3
   
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
    //Bai 4
    int dayso[] ={2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    int n = sizeof (dayso) / sizeof (dayso[0]);
    cout << "So trung binh cong cua mang la: " << (dayso[0] + dayso[1] + dayso[2] + dayso[3] + dayso[4] + dayso[5] + dayso[6] + dayso[7] + dayso[8] + dayso[9])/10;
    cout << endl;

}
    
void Bai9 ()
{
int N[5];
cout << "Nhap 5 so: " << endl;
for (int i = 0; i < 5; i++)
cin >> N[i];
if (DayTangDan(N,5)) {
    cout <<"Day la day tang dan. \n";
} else {
    cout <<"Day khong phai day tang dan. \n";
}
}

int main()
{

Bai9 ();
    


    

    
    

    

    
    


    
    
}