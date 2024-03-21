#include <iostream>
using namespace std;
int main() {
    double n;
    cin >> n;
    if(n>1 &&  static_cast<int>(n) == n) cout << "C";
    else cout << "N";
    // 여기에 코드를 작성해주세요.
    return 0;
}