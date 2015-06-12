#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int sum_of_digits(int N_int) {
    string N_string = to_string(N_int);
    int sum = 0;
    int N_len = N_string.length();

    for(int i=0; i<N_len; i++) {
        sum += N_string[i] - '0';
    }

    return sum;
}

int sum_of_pf_digits(int N) {
    int sum = 0;

    while(N % 2 == 0) {
        sum += 2;
        N = N/2;
    }

    for(int i=3; i<=sqrt(N); i+=2) {
        while(N % i == 0) {
            sum += sum_of_digits(i);
            N = N/i;
        }
    }

    if(N > 2) {
        sum += sum_of_digits(N);
    }

    return sum;
}

int main(void) {
    int N; cin >> N;
    int N_digit_sum = sum_of_digits(N);
    int N_pf_digit_sum = sum_of_pf_digits(N);

    if(N_digit_sum == N_pf_digit_sum)
        cout << '1' << endl;
    else
        cout << '0' << endl;

    return 0;
}
