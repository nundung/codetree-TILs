#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int n=0;
    for (int i=a; i<=b; i++) {
        if(i%6==0 && i%8!=0) {
            n+=i;
        }
    } 
    cout << n;
    // 여기에 코드를 작성해주세요.
    return 0;
}