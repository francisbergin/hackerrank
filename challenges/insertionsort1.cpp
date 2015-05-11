#include <iostream>
#include <vector>

int main(void) {
    int s, tmp, val;
    std::vector<int> ar;

    std::cin >> s;

    for(int i=0; i<s; i++) {
        std::cin >> tmp;
        ar.push_back(tmp);
    }

    val = ar[ar.size() - 1];
 
    for(int i=ar.size()-2; i>=-1; i--) {
        if(i == -1)
            ar[0] = val;
        else if(ar[i] > val)
            ar[i+1] = ar[i];
        else if(ar[i] <= val) {
            ar[i+1] = val;
            i = -2;
        }

        for(int tmp=0; tmp<ar.size(); tmp++) {
            std::cout << ar[tmp];
            if(tmp == ar.size() - 1)
                std::cout << std::endl;
            else
                std::cout << " ";
        }
    }
    
    return 0;
}

