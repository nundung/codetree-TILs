#include <iostream>
using namespace std;
int main() {
    double n;
    cin >> n;
    for (int i=1; i<5000; i++) {
        n /= i;
        if(n<=1) {
            cout << i;
            break;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}