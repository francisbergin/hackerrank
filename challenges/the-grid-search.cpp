#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int t; cin >> t;

    for(int i=0; i<t; i++) {
        int g_r, g_c; cin >> g_r >> g_c;
        vector<string> g(g_r);

        for(int i=0; i<g_r; i++) {
            string s; cin >> s;
            g[i] = s;
        }

        int p_r, p_c; cin >> p_r >> p_c;
        vector<string> p(p_r);

        for(int i=0; i<p_r; i++) {
            string s; cin >> s;
            p[i] = s;
        }

        bool ok = false;

        for(int i_r=0; i_r<g_r-p_r+1; i_r++) {
            for(int i_c=0; i_c<g_c-p_c+1; i_c++) {
                if(p[0] == g[i_r].substr(i_c, p_c)) {
                    ok = true;

                    for(int p_i=1; p_i<p_r; p_i++) {
                        if(p[p_i] != g[i_r+p_i].substr(i_c, p_c)) {
                            ok = false;
                            break;
                        }
                    }
                }

                if(ok == true)
                    break;
            }

            if(ok == true)
                break;
        }

        if(ok == true)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
