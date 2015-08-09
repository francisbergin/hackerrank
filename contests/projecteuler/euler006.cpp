#include <iostream>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        long n; cin >> n;
        long sq_of_sm, sm_of_sq;

        sm_of_sq = ((n * n + n) / 2) * ((n * n + n) / 2);
        sq_of_sm = (n * (n + 1) * (2 * n + 1)) / 6;

        cout << (sm_of_sq - sq_of_sm) << endl;
    }

    return 0;
}
