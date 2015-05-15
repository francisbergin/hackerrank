#include <iostream>

using namespace std;

bool is_palindrome(int n) {
    int dig, rev = 0, num = n;

    while (num > 0) {
        dig = num % 10;
        rev = rev * 10 + dig;
        num = num / 10;
    }

    if(n == rev)
        return true;
    else
        return false;
}

int main(void) {
    int T;
    cin >> T;

    for(int i=0; i<T; i++) {
        int N, tmp, ans = 0;
        cin >> N;

        for(int i1=100; i1<1000; i1++) {
            for(int i2=i1; i2<1000; i2++) {
                tmp = i1*i2;
                if(is_palindrome(tmp))
                    if(tmp > ans and tmp < N)
                        ans = tmp;
            }
        }

        cout << ans << endl;
    }

    return 0;
}
