#include <iostream>

int main(void) {
    int T, N, K, tmp;
    int on_time, late;

    std::cin >> T;

    for(int i=0; i<T; i++) {
        on_time = 0;
        late = 0;

        std::cin >> N;
        std::cin >> K;

        for(int i=0; i<N; i++) {
            std::cin >> tmp;

            if(tmp > 0)
                late++;
            else
                on_time++;
        }

        if(on_time < K)
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }

    return 0;
}
