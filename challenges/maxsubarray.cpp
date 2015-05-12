#include <iostream>

int main(void) {
    int T;

    std::cin >> T;

    for(int i=0; i<T; i++) {
        int N;

        int minimum = -10001;

        int max_contiguous = 0;
        int max_non_contiguous = 0;

        int max_ending_here = 0;
        int max_so_far = 0;

        std::cin >> N;

        for(int i=0; i<N; i++) {
            int tmp;
            std::cin >> tmp;

            if(tmp > minimum)
                minimum = tmp;

            max_ending_here = std::max(0, max_ending_here + tmp);
            max_so_far = std::max(max_so_far, max_ending_here);

            if(tmp > 0)
                max_non_contiguous += tmp;
        }

        max_contiguous = max_so_far;

        if(max_contiguous == 0 and max_non_contiguous == 0) {
            max_contiguous = minimum;
            max_non_contiguous = minimum;
        }

        std::cout << max_contiguous << " ";
        std::cout << max_non_contiguous << std::endl;
    }

    return 0;
}
