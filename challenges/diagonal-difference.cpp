#include <cstdlib>
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N; cin >> N;
    vector< vector<int> > arr(N, vector<int>(N));

    for(int r=0; r<N; r++) {
        for(int c=0; c<N; c++) {
            int tmp; cin >> tmp;
            arr[r][c] = tmp;
        }
    }

    int sum = 0;

    for(int i=0; i<N; i++) {
        sum += arr[i][i];
        sum -= arr[i][N-i-1];
    }

    cout << abs(sum) << endl;

    return 0;
}
