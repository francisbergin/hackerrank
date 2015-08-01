#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        int n, k; cin >> n >> k;
        vector<int> a;
        vector<int> b;

        for(int i=0; i<n; i++) {
            int tmp; cin >> tmp;
            a.push_back(tmp);
        }

        for(int i=0; i<n; i++) {
            int tmp; cin >> tmp;
            b.push_back(tmp);
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        bool flag = true;

        for(int i=0; i<n; i++) {
            if(a[i] + b[i] < k) {
                flag = false;
                break;
            }
        }

        if(flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }

    return 0;
}
