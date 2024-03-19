#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int i=1;
    int cnt = 1;
    while (i<11) {
        cnt *= i;
        if( cnt >= n ) {
            cout << i;
            break;
        }
        i++;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}