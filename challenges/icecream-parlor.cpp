#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int T; cin >> T;

    for(int i=0; i<T; i++) {
        int M; cin >> M;
        int N; cin >> N;
        vector<int> a;
        for(int i=0; i<N; i++) {
            int tmp; cin >> tmp;
            a.push_back(tmp);
        }
        bool brk = false;
        for(int i1=0; i1<N; i1++) {
            for(int i2=i1+1; i2<N; i2++) {
                if(a[i1]+a[i2] == M) {
                    cout << (i1+1) << ' ' << (i2+1) << endl;
                    brk = true;
                    break;
                }
            }
            if(brk == true)
                break;
        }
    }

    return 0;
}
