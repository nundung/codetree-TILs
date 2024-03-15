#include <iostream>
using namespace std;
int main() {
    int a = 0;
    int b = 0;
    int n;
    for (int i=0; i<10; i++) {
        cin >> n;
        if (n%3==0) a++;
        if (n%5==0) b++;
    }
    cout<<a<<' '<<b;
    // 여기에 코드를 작성해주세요.
    return 0;
}