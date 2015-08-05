#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n,  k; cin >> n >> k;
    vector<int> a;

    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    int ans=0, total=0;

    for(int i=0; i<n; i++) {
        if(total+a[i] <= k) {
            total += a[i];
            ans += 1;
        }
        else
            break;
    }

    cout << ans << endl;

    return 0;
}
