#include <iostream>
#include <string>
using namespace std;

 int main()
 {
    string message;
    cout << message;
float a=3.0;
std::cout << a<<"\n";
bool isGay= true;
std::cout << isGay <<"\n";

 int arr[] = {2222, 3, 19, 88, 12321, 28, 4774, 31, 141, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = arr[0];

    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    cout << "Gia tri lon nhat trong mang la: " << max << endl;

    return 0;

 }