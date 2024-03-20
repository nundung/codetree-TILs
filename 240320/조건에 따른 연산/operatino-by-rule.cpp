#include <iostream>
using namespace std;
int main() {
    int n;
    int cnt=0;
    cin >> n;
    while (1) {
        if(n>1000) {
            cout << cnt;
            break;   
        }
        if(n%2==0) {
            cnt++;
            n=n*3+1;
        }else {
            cnt++;
            n=n*2+2;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}