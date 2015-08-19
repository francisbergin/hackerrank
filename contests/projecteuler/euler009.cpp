#include <iostream>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        int n; cin >> n;

        unsigned int ans = 0;

        for(int a=n/3; a>0; a--) {
            for(int b=n/2; b>=a; b--) {
                int c = n - a - b;

                if(a*a + b*b == c*c) {
                    if(a*b*c > ans) {
                        ans = a*b*c;
                        break;
                    }
                }
            }
            
            if(ans != 0)
                break;
        }

        if(ans == 0)
            cout << "-1" << endl;
        else
            cout << ans << endl;
    }

    return  0;
}
