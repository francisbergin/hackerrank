#include <cmath>
#include <iostream>
#include <string>

int main(void) {
    int T;
    int nrm, rev;
    std::string S;
    bool funny;

    std::cin >> T;

    for(int i=0; i<T; i++) {
        std::cin >> S;
        funny = true;
        for(int i=0; i<S.length()-1; i++) {
            nrm = std::abs(S[i+1] - S[i]);
            rev = std::abs(S[S.length()-i-2] - S[S.length()-i-1]);
            if(nrm != rev) {
                funny = false;
                break;
            }
        }

        if(funny)
            std::cout << "Funny" << std::endl;
        else
            std::cout << "Not Funny" << std::endl;
    }

    return 0;
}
