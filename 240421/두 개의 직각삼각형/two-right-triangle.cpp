#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i = n; i>0; i--) {
        for (int j=i; j>0; j--) {
            cout << "*";
        }
        for (int k=0; k<=n-(i*2)+n-1; k++) {
            cout << " ";
        }
        for (int j=i; j>0; j--) {
            cout << "*";
        }
        cout << endl;
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}