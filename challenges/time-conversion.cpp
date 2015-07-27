#include <iostream>
#include <string>

using namespace std;

int main(void) {
    string t; cin >> t;
    int h = stoi(t.substr(0,2));
    if(t.substr(8,9) == "AM") {
        if(h == 12)
            cout << "00";
        else
            cout << t.substr(0,2);
    } else {
        if(h == 12)
            cout << "12";
        else
            cout << h + 12;
    }
    cout << t.substr(2,6) << endl;
    return 0;
}
