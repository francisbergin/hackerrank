#include <iostream>

using namespace std;

int main(void) {
    int N; cin >> N;

    for(int i1=0; i1<N; i1++) {
        for(int i2=N-i1-1; i2>0; i2--) {
            cout << ' ';
        }
        for(int i2=0; i2<i1+1; i2++) {
            cout << '#';
        }
        cout << endl;
    }

    return 0;
}
