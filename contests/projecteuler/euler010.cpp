#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool is_prime(int n) {
    if(n < 2)
        return false;

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

    vector<unsigned long> sum(3);
    sum = {0, 0, 2};

    for(int i=0; i<t; i++) {
        int n; cin >> n;

        int l = sum.size();

        if(n <= l) {
            cout << sum[n] << endl;
            continue;
        }

        for(int j=l; j<=n; j++) {
            if(is_prime(j))
                sum.push_back(sum[j-1]+j);
            else
                sum.push_back(sum[j-1]);
        }

        cout << sum[n] << endl;
    }

    return 0;
}
