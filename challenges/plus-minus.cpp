#include <iomanip>
#include <iostream>

using namespace std;

int main(void) {
    int N; cin >> N;

    int pcnt = 0;
    int ncnt = 0;
    int zcnt = 0;

    for(int i=0; i<N; i++) {
        int tmp; cin >> tmp;
        if(tmp > 0)
            pcnt++;
        else if(tmp < 0)
            ncnt++;
        else
            zcnt++;
    }

    float ans;

    ans = (float)pcnt / (float)N;
    cout << fixed << setprecision(3) << ans << endl;

    ans = (float)ncnt / (float)N;
    cout << fixed << setprecision(3) << ans << endl;

    ans = (float)zcnt / (float)N;
    cout << fixed << setprecision(3) << ans << endl;

    return 0;
}
