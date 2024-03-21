#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    bool isTrue = false;
    for (int i=a; i<b+1; i++) {
        if(1920%i==0 && 2880%i==0) {
            isTrue = true;
            break;
        }
    }
    if (isTrue) cout << 1;
    else cout << 0;
    // 여기에 코드를 작성해주세요.
    return 0;
}