#include <iostream>
#include <string>
using namespace std;
long long fibonacci(int number) {
    if (number < 0) {
        return 1;
    } else if (number == 0) {
        cout <<"0";
    } else if (number == 1) {
        cout <<"1";
    } else {
        cout << number <<" so dau tien cua day fibonacci la: ";
        return number = (fibonacci(number - 1) + fibonacci(number - 2));
    }
}
int main() 
{
    fibonacci(2);
}