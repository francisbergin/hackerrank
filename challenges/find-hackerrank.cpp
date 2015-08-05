#include <iostream>
#include <regex>
#include <string>

using namespace std;

int main(void) {
    int n; cin >> n;
    cin.ignore();

    regex rx_s("^hackerrank");
    regex rx_e("hackerrank$");

    for(int i=0; i<n; i++) {
        string s; getline(cin, s);

        if(regex_search(s, rx_s) && regex_search(s, rx_e))
            cout << '0' << endl;
        else if(regex_search(s, rx_s))
            cout << '1' << endl;
        else if(regex_search(s, rx_e))
            cout << '2' << endl;
        else
            cout << "-1" << endl;
    }

    return 0;
}
