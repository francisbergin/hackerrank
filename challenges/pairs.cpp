#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, K; cin >> N >> K;
    vector<int> a;

    for(int i=0; i<N; i++) {
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    int ans = 0;
    int i = 0;
    int j = 1;

    while(j < a.size()) {
        int diff = a[j] - a[i];
        if(diff == K) {
            ans++;
            i++;
            j++;
        }
        else if(diff < K)
            j++;
        else
            i++;
    }

    cout << ans << endl;

    return 0;
}
