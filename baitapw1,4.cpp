#include <iostream>
using namespace std;

int main() {
    //Bai 5,6
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
