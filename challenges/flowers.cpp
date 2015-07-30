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
    sort(a.begin(), a.end(), greater<int>());
    int sum = 0;
    for(int i=0; i<N; i++) {
        sum += ((i/K)+1)*a[i];
    }
    cout << sum << endl;

    return 0;
}
