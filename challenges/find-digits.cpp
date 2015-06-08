#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int n_int;
        vector<int> ans;
        string n_str;
        cin >> n_int;
        n_str = to_string(n_int);
        for(int i=0; i<n_str.length(); i++) {
            int c = n_str[i]-'0';

            if(c != 0) {
                if(n_int % c == 0) {
                    ans.push_back(c);
                }
            }
        }
        cout << ans.size() << endl;
    }
}
