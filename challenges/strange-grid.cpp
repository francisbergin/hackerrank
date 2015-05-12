#include <iostream>

int main(void) {
    long r;
    int c;
    int o[5] = {1, 3, 5, 7, 9};
    int e[5] = {0, 2, 4, 6, 8};
    long ans;

    std::cin >> r >> c;

    if(r % 2 == 0)
        ans = (((r/2)-1)*10) + o[c-1];
    else
        ans = (((r-1)/2)*10) + e[c-1];

    std::cout << ans << std::endl;

    return 0;
}
