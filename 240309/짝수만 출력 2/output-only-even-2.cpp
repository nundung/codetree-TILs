#include <iostream>
using namespace std;
int main() {
    int b, a;
    cin >> b >> a;
    int i=b;
    while (i>a-1) {
        if (i%2==0) cout << i << ' ';
        i--;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}