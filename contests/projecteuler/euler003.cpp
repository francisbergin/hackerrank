#include <cmath>
#include <iostream>

long largest_prime_factor(long n) {
    long largest_prime = 0;

    while(n % 2 == 0) {
        n = n/2;
    }

    for(int i=3; i<=std::sqrt(n); i+=2) {
        while (n % i == 0) {
            largest_prime = i;
            n = n/i;
        }
    }

    if(n > 2)
        largest_prime = n;

    return largest_prime;
}

int main(void) {
    int T;
    long N;

    std::cin >> T;

    for(int i=0; i<T; i++) {
        std::cin >> N;
        std::cout << largest_prime_factor(N) << std::endl;
    }

    return 0;
}
