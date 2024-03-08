#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if ( a > b && a < c || c < a && a < b ) cout << a;
    if ( b > a && b < c || c < b && b < a ) cout << b;
    if ( c > b && c < a || (a < c && c < b) ) cout << c;
    // 여기에 코드를 작성해주세요.
    return 0;
}