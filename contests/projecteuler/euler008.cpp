#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        int n, k; cin >> n >> k;
        string s; cin >> s;

        unsigned long ans = 0;

        for(int i1=0; i1<n-k+1; i1++) {
            unsigned long tmp = s[i1] - '0';

            for(int i2=i1+1; i2<i1+k; i2++) {
                tmp *= s[i2] - '0';
            }

            if(tmp > ans)
                ans = tmp;

        }

        cout << ans << endl;
    }

    return 0;
}
