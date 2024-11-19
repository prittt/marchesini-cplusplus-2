#include "mv.h"

int main(){

    std::vector<int> v = {1, 2, 3, 4, 5};
    
    double mean = Mean(v);
    double variance = Variance(v);

    return EXIT_SUCCESS;
}