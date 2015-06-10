#include <iostream>

using namespace std;

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int N;
        cin >> N;
        int cnt_3 = 0;
        int cnt_5 = 0;
        while(N > 0) {
            if(N % 3 == 0) {
                cnt_5 = N/3;
                N = 0;
                break;
            }
            cnt_3++;
            N -= 5;
        }
        if(N != 0) {
            cout << "-1" << endl;
            continue;
        }
        for(int i=0; i<cnt_5; i++) {
            cout << "555";
        }
        for(int i=0; i<cnt_3; i++) {
            cout << "33333";
        }
        cout << endl;
    }

    return 0;
}
