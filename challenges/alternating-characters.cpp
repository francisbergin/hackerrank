#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int T; cin >> T;

    for(int i=0; i<T; i++) {
        string s; cin >> s;
        int cnt = 0;
        char prev = '\0';
        for(auto c : s) {
            if(c == prev)
                cnt++;
            prev = c;
        }
        cout << cnt << endl;
    }

    return 0;
}
