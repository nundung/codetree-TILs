#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    bool isC = false;
    for (int i=2; i<n; i++) {
        if(n%i==0) {
            isC = true;
            break;
        };
    }
    if (isC) cout << "C";
    else cout << "P";
    // 여기에 코드를 작성해주세요.
    return 0;
}