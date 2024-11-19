#ifndef MV_H_
#define MV_H_

#include <vector>

template<typename T>
double Mean(const std::vector<T> &v) {
    double sum = 0;
    for (const T& num : v) {
        sum += num;
    }
    return sum / v.size();
}

template<typename T>
double Variance(const std::vector<T> &v) {
    double m = Mean(v);
    double sum = 0;
    for (T num : v) {
        sum += (num - m) * (num - m);
    }
    return sum / v.size();
}
#endif