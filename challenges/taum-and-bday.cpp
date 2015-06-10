#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        long long int B, W;
        cin >> B >> W;
        long long int X, Y, Z;
        cin >> X >> Y >> Z;
        if(X+Z < Y)
            Y = X+Z;
        if(Y+Z < X)
            X = Y+Z;
        cout << B*X + W*Y << endl;
    }

    return 0;
}

