#include <iostream>

#include "ran_hyper_vector.h"

int main() {

    const int ns = 100;
    const int nd = 3;

    auto s = new double[ns][nd];
    for (unsigned int i = 0; i < ns; i++) {
        rand_vect_mueller(nd, s[i]);
    }

    std::cout.precision(16);
    for (unsigned int i = 0; i < ns; i++) {
        for (unsigned int j = 0; j < nd; j++) {
            std::cout << s[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    return 0;
}
