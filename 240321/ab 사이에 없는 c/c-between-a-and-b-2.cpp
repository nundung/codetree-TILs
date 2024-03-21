#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool isTrue = false;
    for (int i=a; i<b+1; i++) {
        if (i%c==0) {
            isTrue = true;
            break;
        }
    }
    if(isTrue) cout << "NO";
    else cout << "YES";
    
    // 여기에 코드를 작성해주세요.
    return 0;
}