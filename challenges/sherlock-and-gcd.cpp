#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b) {
    if(b == 0)
        return a;
    else
        return gcd(b, a%b);
}

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int N; cin >> N;
        vector<int> A;
        for(int i=0; i<N; i++) {
            int tmp; cin >> tmp;
            A.push_back(tmp);
        }
        if(N == 1) {
            cout << "NO" << endl;
            continue;
        }
        int ans = A[0];
        bool flag = false;
        for(int i=1; i<N; i++) {
            ans = gcd(ans, A[i]);
            if(ans == 1) {
                flag = true;
                break;
            }
        }
        if(flag == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
