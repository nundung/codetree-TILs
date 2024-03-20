#include <iostream>
using namespace std;
int main() {
    double sum=0, i=0;
    int n;
    cout << fixed;
    cout.precision(2);
    while (1) {
        cin >> n;
        if(19<n && n<30) {
            sum += n;
            i++;
        } else {
            cout << sum/i;
            break;
        } 
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}