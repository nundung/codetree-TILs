#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=0; i<=n-1; i++) {
        for (int j=0; j<=i; j++) {
            cout << "* ";
        }
        cout << endl;
    }
    for (int l=0; l<=n-2; l++) {
        for (int k=n-2; k>=l; k--) {
            cout << "* ";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}