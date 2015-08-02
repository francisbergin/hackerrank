#include <cmath>
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(void) {
    string s1, s2;
    cin >> s1 >> s2;

    map<char, int> ms1, ms2;

    for(auto c : s1) {
        if(ms1.find(c) == ms1.end())
            ms1[c] = 1;
        else
            ms1[c] += 1;
    }

    for(auto c : s2) {
        if(ms2.find(c) == ms2.end())
            ms2[c] = 1;
        else
            ms2[c] += 1;
    }

    int ans = 0;

    for(auto i : ms1) {
        if(ms2.find(i.first) == ms2.end())
            ans += i.second;
        else
            ans += abs(i.second - ms2[i.first]);
    }

    for(auto i : ms2) {
        if(ms1.find(i.first) == ms1.end())
            ans += i.second;
    }

    cout << ans << endl;

    return 0;
}
