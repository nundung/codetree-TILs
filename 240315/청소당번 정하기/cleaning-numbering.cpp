#include <iostream>
using namespace std;
int main() {
    int a=0, b=0, c=0;
    int n;
    cin >> n;
    for (int i=1; i<n+1; i++) {
        if(i%12==0) c++;
        else if(i%3==0) b++;
        else if(i%2==0) a++;
    }
    cout<<a<<" "<<b<<" "<<c;
    // 여기에 코드를 작성해주세요.
    return 0;
}