#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        string s; cin >> s;
        int l = s.size();

        if(l % 2 != 0) {
            cout << "-1" << endl;
            continue;
        }

        int m = l/2;
        int ans = 0;

        string s1 = s.substr(0, m);
        string s2 = s.substr(m, m);

        while(s1.size() != 0) {
            size_t pos = s2.find(s1[0]);

            if(pos == string::npos)
                ans++;
            else
                s2.erase(pos, 1);

            s1.erase(0, 1);
        }

        cout << ans << endl;
    }
}
