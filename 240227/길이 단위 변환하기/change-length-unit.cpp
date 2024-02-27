#include <iostream>

using namespace std;

int main() {
    double a = 9.2;
    double b = 30.48;

    double c = 1.3;
    double d = 160934;

    cout << fixed;
    cout.precision(1);

    cout << a << "ft" << " = " << a*b << "cm" << endl;
    cout << c << "mi" << " = " << c*d << "cm"; 
    // 여기에 코드를 작성해주세요.
    return 0;
}