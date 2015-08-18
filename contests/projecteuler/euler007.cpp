#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if(n == 2)
        return true;

    if(n % 2 == 0)
        return false;

    for(int i=3; i<sqrt(n)+1; i+=2) {
        if(n % i == 0)
            return false;
    }

    return true;
}

int main(void) {
    int t; cin >> t;
    vector<unsigned long> primes;
    primes.push_back(2);
    primes.push_back(3);

    for(int i=0; i<t; i++) {
        int n; cin >> n;

        if(n <= primes.size()) {
            cout << primes[n-1] << endl;
            continue;
        }

        unsigned long p = primes[primes.size()-1]+2;

        while(1) {
            if(is_prime(p)) {
                primes.push_back(p);

                if(n <= primes.size()) {
                    cout << primes[n-1] << endl;
                    break;
                }
            }

            p += 2;
        }
    }

    return 0;
}
