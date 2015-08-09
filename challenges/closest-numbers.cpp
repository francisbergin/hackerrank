#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a[i] = tmp;
    }

    sort(a.begin(), a.end());

    vector<int> ans;

    int smallest = abs(a[0] - a[1]);
    ans.push_back(a[0]);
    ans.push_back(a[1]);

    for(int i=1; i<n-1; i++) {
        int diff = abs(a[i] - a[i+1]);

        if(diff < smallest) {
            smallest = diff;
            ans.clear();
            ans.push_back(a[i]);
            ans.push_back(a[i+1]);
        }
        else if(diff == smallest) {
            ans.push_back(a[i]);
            ans.push_back(a[i+1]);
        }
    }

    sort(ans.begin(), ans.end());

    int l = ans.size();

    for(int i=0; i<l; i++) {
        cout << ans[i];

        if(i == l-1)
            cout << endl;
        else
            cout << ' ';
    }

    return 0;
}
