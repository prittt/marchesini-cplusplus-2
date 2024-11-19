#include <iostream>
#include <vector>
#include <list>

#include "mv.h"

int main(){

    double mean, variance;
    std::vector<int> v = {1, 2, 3, 4, 5};
    mean = Mean(v.begin(), v.end());
    variance = Variance(v.begin(), v.end());

    std::vector<double> v1 = {1., 2., 3., 4., 5.};
    mean = Mean(v1.begin(), v1.end());
    variance = Variance(v1.begin(), v1.end());
    
    std::list<double> l = {1., 2., 3., 4., 5.};
    mean = Mean(l.begin(), l.end());
    variance = Variance(l.begin(), l.end());
    
    int v3[] = {1, 2, 3, 4, 5};
    mean = Mean(v3, v3 + 5);
    variance = Variance(v3, v3 + 5);

    return EXIT_SUCCESS;
}