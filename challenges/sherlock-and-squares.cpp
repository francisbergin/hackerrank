#include <cmath>
#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        long int A, B;
        cin >> A >> B;
        if(A == B) {
            if(floor(sqrt(A)) == sqrt(A)) {
                cout << '1' << endl;
                continue;
            }
        }
        long int min = 0;
        long int max = 0;
        for(long int i=A; i<B; i++) {
            long double sr = sqrt(i);
            if(floor(sr) == sr) {
                min = sr;
                break;
            }
        }
        for(long int i=B; i>A; i--) {
            long double sr = sqrt(i);
            if(floor(sr) == sr) {
                max = sr;
                break;
            }
        }

        if(min == 0 || max == 0)
            cout << '0' << endl;
        else
            cout << max-min+1 << endl;
    }

    return 0;
}

