#include <algorithm>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <vector>

using namespace std;

float mean(vector<int> a, int n) {
    unsigned long long sum;
    for(auto i : a) {
        sum += i;
    }
    return ((float)sum/n);
}

float median(vector<int> a, int n) {
    if(n % 2 == 0)
        return ((a[n/2-1]+a[n/2])/2.0);
    else
        return a[n/2];
}

int mode(vector<int> a) {
    map<int, int> m;
    int ans = 0;
    int cnt = 0;
    for(auto i : a) {
        if(m.find(i) == m.end())
            m[i] = 1;
        else
            m[i] += 1;
    }
    for(auto i : m) {
        if(i.second > cnt) {
            ans = i.first;
            cnt = i.second;
        }
        else if(i.second == cnt)
            if(i.first < ans) {
                ans = i.first;
                cnt = i.second;
            }
    }
    return ans;
}

float standard_deviation(vector<int> a, int n, float x) {
    unsigned long long sum = 0;
    for(auto i : a) {
        sum += (i - x) * (i - x);
    }
    return sqrt((float)sum/n);
}

float margin_error(float sd, int n) {
    return -1.96 * (sd/sqrt(n));
}

int main(void) {
    vector<int> a;
    int n; cin >> n;

    for(int i=0; i<n; i++) {
        int tmp; cin >> tmp;
        a.push_back(tmp);
    }

    sort(a.begin(), a.end());

    float x = mean(a, n);
    float med = median(a, n);
    float sd = standard_deviation(a, n, x);
    float margin = margin_error(sd, n);

    cout << x << endl;
    cout << med << endl;
    cout << mode(a) << endl;
    cout << sd << endl;
    cout << (x+margin) << ' ' << (x-margin) << endl;

    return 0;
}
