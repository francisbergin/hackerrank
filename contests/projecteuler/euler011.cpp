#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int ans = 0;
    vector<vector<int>> t(20, vector<int>(20));

    for(int r=0; r<20; r++) {
        for(int c=0; c<20; c++) {
            int tmp; cin >> tmp;
            t[r][c] = tmp;
        }
    }

    for(int r=0; r<20; r++) {
        for(int c=0; c<20; c++) {
            int tmp;

            if(c < 20 - 3) {
                tmp = t[r][c] * t[r][c+1] * t[r][c+2] * t[r][c+3];
                if(tmp > ans)
                    ans = tmp;
            }
            if(r < 20 - 3) {
                tmp = t[r][c] * t[r+1][c] * t[r+2][c] * t[r+3][c];
                if(tmp > ans)
                    ans = tmp;
            }
            if(c < 20 - 3 && r < 20 - 3) {
                tmp = t[r][c] * t[r+1][c+1] * t[r+2][c+2] * t[r+3][c+3];
                if(tmp > ans)
                    ans = tmp;
            }
            if(c >= 3 && r < 20 - 3) {
                tmp = t[r][c] * t[r+1][c-1] * t[r+2][c-2] * t[r+3][c-3];
                if(tmp > ans)
                    ans = tmp;
            }
        }
    }

    cout << ans << endl;

    return 0;
}
