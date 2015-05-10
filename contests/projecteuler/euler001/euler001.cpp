#include <iostream>
using namespace std;

unsigned long int triangle(unsigned long int n) {
    return (n*(n+1))/2;
}

unsigned long int sumdivby(unsigned long int divby, unsigned long int upto) {
    return divby * triangle(upto/divby);
}

int main(void) {
    unsigned long int T, N;
    unsigned long int ans;
    cin >> T;
    for(unsigned long int i=0; i<T; i++){
        cin >> N;
        N -= 1;
        ans = 0;
        ans += sumdivby(3, N);
        ans += sumdivby(5, N);
        ans -= sumdivby(15, N);
        cout << ans << endl;
    }

    return 0;
}

