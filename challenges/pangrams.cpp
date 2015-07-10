#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(void) {
    set<int> a;
    string s; getline(cin, s);
    for(auto c : s) {
        if(c >= 97 and c <= 122)
            a.insert(c);
        else if(c >= 65 and c <= 90)
            a.insert(c+32);
    }

    if(a.size() == 26)
        cout << "pangram" << endl;
    else
        cout << "not pangram" << endl;

    return 0;
}
