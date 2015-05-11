#include <iostream>
#include <vector>

int main(void) {
    int s, tmp, i2;
    std::vector<int> ar;

    std::cin >> s;

    for(int i=0; i<s; i++) {
        std::cin >> tmp;
        ar.push_back(tmp);
    }

    for(int i1=1; i1<ar.size(); i1++) {
        tmp = ar[i1];
        i2 = i1 - 1;
        while(i2 >= 0 and ar[i2] > tmp) {
            ar[i2+1] = ar[i2];
            i2 -= 1;
        }
        ar[i2+1] = tmp;
        for(int i=0; i<ar.size();i++) {
            std::cout << ar[i];
            if(i == ar.size()-1)
                std::cout << std::endl;
            else
                std::cout << " ";
        }
    }

    return 0;
}

