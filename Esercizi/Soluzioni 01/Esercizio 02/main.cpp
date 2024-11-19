#include "mv.h"

int main(){

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<double> v2 = {1.5, 2.4, 3.2, 4.12, 5.77};
    
    double mean;
    mean = Mean(v1);
    mean = Mean(v2);
    
    double variance;
    variance = Variance(v1);
    variance = Variance(v2);

    return EXIT_SUCCESS;
}