#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> a;

    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    int min = a[0];
    int max = a[0]+4;
    int cnt = 1;

    for(int i=1; i<n; i++) {
        if(a[i] >= min && a[i] <= max)
            continue;

        cnt++;
        min = a[i];
        max = a[i]+4;
    }

    cout << cnt << endl;

    return 0;
}
