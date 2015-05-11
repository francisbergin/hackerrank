#include <iostream>
#include <vector>

int find_smallest_val(std::vector<int> ar) {
    int sml_val = 1001;

    for(int i=0; i<ar.size(); i++) {
        if(ar[i] < sml_val)
            sml_val = ar[i];
    }

    return sml_val;
}

void cut_sticks(std::vector<int> *ar, int len) {
    int i = 0;

    while(true) {
        (*ar)[i] -= len;
        if((*ar)[i] <= 0)
            (*ar).erase((*ar).begin() + i);
        else
            i += 1 ;
        if(i == (*ar).size())
            break;
    }
}

int main(void) {
    int n, tmp;
    std::vector<int> ar;

    std::cin >> n;

    for(int i=0; i<n; i++) {
        std::cin >> tmp;
        ar.push_back(tmp);
    }

    while(ar.size() != 0) {
        std::cout << ar.size() << std::endl;
        cut_sticks(&ar, find_smallest_val(ar));
    }

    return 0;
}
