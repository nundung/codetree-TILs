#include <iostream>
using namespace std;
int main() {
    int a, b;
    int n=1;
    cin >> a >> b;
    for (int i=1; i<b+1; i++) {
        if (i%a==0) n *= i; 
    }
    cout << n;
    // 여기에 코드를 작성해주세요.
    return 0;
}