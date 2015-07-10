#include <iostream>

using namespace std;

int main() {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        unsigned int n; cin >> n;
        cout << (n ^ 4294967295) << endl;
    }

    return 0;
}
