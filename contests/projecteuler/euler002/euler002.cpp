#include <iostream>

using namespace std;

unsigned long bruteforce(long N) {
    long vala = 1;
    long valb = 2;
    long tmp;
    unsigned long ans = 2;
    for(long i=3; i<N; i++) {
        tmp = valb;
        valb += vala;
        vala = tmp;
        if(valb >= N)
            break;
        if(valb % 2 == 0)
            ans += valb;
    }
    return ans;
}

int main(void) {
    int T;
    long N;

    cin >> T;

    for(int i=0; i<T; i++) {
        cin >> N;
        cout << bruteforce(N) << endl;
    }

    return 0;
}

