#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=1; i<n+1; i++) {
        for (int j=n-i; j>0; j--) {
            cout << " ";
        }
        for (int k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    for (int i=1; i<n; i++) {
        for (int j=n-i; j>0; j--) {
            cout << " ";
        }
        for (int k=1; k<=2*i-1; k++) {
            cout << "*";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}