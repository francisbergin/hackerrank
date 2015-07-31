#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        string s; cin >> s;

        int a=0, b=0, c=0;

        for(auto ch : s) {
            if(ch == 'a')
                a++;
            else if(ch == 'b')
                b++;
            else if(ch == 'c')
                c++;
        }

        if(a == 0 && b == 0)
            cout << c << endl;
        else if(a == 0 && c == 0)
            cout << b << endl;
        else if(b == 0 && c == 0)
            cout << a << endl;
        else if(a % 2 == 0 && b % 2 == 0 && c % 2 == 0)
            cout << '2' << endl;
        else if(a % 2 != 0 && b % 2 != 0 && c % 2 != 0)
            cout << '2' << endl;
        else
            cout << '1' << endl;
    }

    return 0;
}
