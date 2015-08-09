#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> a(n);

    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a[i] = tmp;
    }

    k = k % n;

    for(int i=0; i<q; i++) {
        int idx; cin >> idx;

        if(idx - k >= 0)
            cout << a[idx-k] << endl;
        else
            cout << a[n-k+idx] << endl;
    }

    return 0;
}
