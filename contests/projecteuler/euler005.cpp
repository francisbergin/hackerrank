#include <iostream>

using namespace std;

int gcd(unsigned int a, unsigned int b) {
    if(a == 0)
        return b;
    return gcd(b%a, a);
}

int lcm(unsigned int a, unsigned int b) {
    return (a*b)/gcd(a,b);
}

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        unsigned int ans = 1;
        int n;
        cin >> n;

        for(int i=2; i<=n; i++) {
            ans = lcm(ans, i);
        }

        cout << ans << endl;
    }

    return 0;
}
