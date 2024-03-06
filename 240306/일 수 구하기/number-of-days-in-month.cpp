#include <iostream>
using namespace std;
int main() {
    int a;
    cin >> a;
    if ( a % 2 == 1 || a == 8 ) cout << 31;
    else if ( a == 2 ) cout << 28;
    else cout << 30;
    // 여기에 코드를 작성해주세요.
    return 0;
}