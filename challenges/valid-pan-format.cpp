#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main(void) {
    int n; cin >> n;
    regex pan("^[A-Z][A-Z][A-Z][A-Z][A-Z][0-9][0-9][0-9][0-9][A-Z]$");

    for(int i=0; i<n; i++) {
        string s; cin >> s;

        if(regex_match(s, pan))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
