#include <iostream>
#include <string>
using namespace std;
int factorial (int n ) {
     cout << n << endl;
        if (n <= 1) {
            return 1;
        } else {
            return n * factorial (n - 1);
        }
}
int main ()
{
factorial (5);
}