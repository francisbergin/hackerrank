#include <iostream>
#include <string>
#include <vector>

std::vector<int> splitstr(std::string ar) {
    int i1 = 0;
    std::vector<int> vec;
    while(1) {
        for(int i2=i1+1; i2<=ar.length(); i2++) {
            if(ar[i2] == ' ' or i2 == ar.length()) {
                vec.push_back(std::stoi(ar.substr(i1, i2-i1)));
                i1 = i2 + 1;
                break;
            }
        }
        if(i1 >= ar.length())
            break;
    }

    return vec;
}

int main(void) {
    int V, n;
    std::string ar;
    std::vector<int> vec;

    std::cin >> V;
    std::cin >> n;
    std::cin.ignore();
    std::getline(std::cin, ar);
    
    vec = splitstr(ar);

    for(int i=0; i<vec.size(); i++) {
        if(vec[i] == V)
            std::cout << i << std::endl;
    }

    return 0;
}

