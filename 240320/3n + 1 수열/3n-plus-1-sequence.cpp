#include <iostream>
using namespace std;
int main() {
	ios_base :: sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n;
    int cnt=0;
    while (1) {
        cin >> n;
        if(n==1) {
            cout << cnt;
            break;
        } 
        if(n%2==0) {
            n/=2;
            cnt++;
        }
        else {
            n*=3;
            n+=1;
            cnt++;
        }
    }
    // 여기에 코드를 작성해주세요.
    return 0;
}