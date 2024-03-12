#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        int a;
        cin >> a;
        if ( a%2==1 && a%3==0 ) cout << a << '\n'; 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}