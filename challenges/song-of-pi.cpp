#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int pi[29] = {3,1,4,1,5,9,2,6,5,3,5,8,9,7,9,3,2,3,8,4,6,2,6,4,3,3,8,3,3};
    int T;
    cin >> T;
    cin.ignore();

    for(int i=0; i<T; i++) {
        string s;
        getline(cin, s);
        int char_cnt = 0;
        int word_cnt = 0;
        int pi_cnt = 0;
        bool flag = true;
        for(int i=0; i<s.length(); i++) {
            if(s[i] == ' ') {
                word_cnt++;
                if(pi[pi_cnt] != char_cnt) {
                    flag = false;
                    break;
                }
                pi_cnt++;
                char_cnt = 0;
            }
            else
                char_cnt++;
        }

        if(word_cnt == 0 && s.length() != 3)
            flag = false;

        if(flag == true)
            cout << "It's a pi song." << endl;
        else
            cout << "It's not a pi song." << endl;
    }

    return 0;
}
