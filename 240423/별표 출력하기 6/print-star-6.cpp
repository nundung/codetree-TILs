#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for (int i=n; i>=0; i--) {
        for (int j=2*i+1; j>0; j--) {
            cout << " * ";
        }
        cout << endl;
        for (int k=1; k<=2*i+1; k++) {
            cout << " * ";
        }    
        cout << endl;
    }
    
    // 여기에 코드를 작성해주세요.
    return 0;
}