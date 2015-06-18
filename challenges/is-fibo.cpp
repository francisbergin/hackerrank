#include <iostream>

using namespace std;

bool is_fibo(long long n) {
    if(n == 0 or n == 1)
        return true;
    long long prev1 = 0;
    long long prev2 = 1;
    long long curr = 0;
    while(curr < n) {
        curr = prev1 + prev2;
        if(curr == n)
            return true;
        prev1 = prev2;
        prev2 = curr;
    }
    return false;
}

int main(void) {
    long T; cin >> T;

    for(int i=0; i<T; i++) {
        long long N; cin >> N;
        if(is_fibo(N))
            cout << "IsFibo" << endl;
        else
            cout << "IsNotFibo" << endl;
    }

    return 0;
}
