#include <iostream>
using namespace std;
int main() {
    int n;
    int i =0;
    while (i<3) {
        cin >> n;
        if(n%2==0) {
            cout << n/2 << '\n';
            i++;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}