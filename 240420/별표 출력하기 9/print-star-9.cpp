#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (int j=n-i; j>1; j--) {
            cout << "  ";
        }
        for( int j=0; j< 2*i+1; j++) {
            cout << "* ";
        }
        cout << endl;
    // 여기에 코드를 작성해주세요.
    }
    return 0;
}