#include <iostream>
using namespace std;


bool isSonguyento (int a) {
    if (a >=2 ) {
        for (int i = 2; i < a; i++) {
            if (a % i == 0 ) {
                return false;
            }
        } 
        return true;
    } 
    return false;
}


void Bai1 () {
    int array[4][4] = {{3, 1, 0, 7},{2, 5, 10, 3},{3, 7, 4, 1},{10, 2, 0, 3}};
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            cout << array[i][j] << " ";
        }
        cout << endl;
    } 
}

void Bai2 () {
    int row = 0, maxprime = 0;
    int array[4][4] = {{3, 1, 0, 7},{2, 5, 10, 3},{3, 11, 4, 1},{10, 2, 0, 3}};
     for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            int num = array[i][j];
             if (isSonguyento(num)) {
                if (num >= maxprime) {
                    row = i;
                    maxprime = num;
                }
             }
        }
    }
    cout << "Dong thu " << row + 1 << " co so nguyen to lon nhat la: " << maxprime << endl;
}


int main () {

Bai2();










    return 1;
}