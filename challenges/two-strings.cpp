#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        string s1, s2;
        cin >> s1 >> s2;

        sort(s1.begin(), s1.end());
        s1.erase(unique(s1.begin(), s1.end()), s1.end());

        sort(s2.begin(), s2.end());
        s2.erase(unique(s2.begin(), s2.end()), s2.end());

        bool has_substr = false;

        for(auto c1 : s1) {
            for(auto c2: s2) {
                if(c1 == c2) {
                    has_substr = true;
                    break;
                }
            }

            if(has_substr)
                break;
        }

        if(has_substr)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
