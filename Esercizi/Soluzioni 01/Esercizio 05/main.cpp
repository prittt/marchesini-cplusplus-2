#include "nodup.h"

#include <iostream>
#include <chrono>
#include <random>

// Template function to measure execution time
template <typename Func, typename... Args>
auto measure_time(Func&& func, Args&&... args) {
    auto start = std::chrono::high_resolution_clock::now();
    auto result = std::forward<Func>(func)(std::forward<Args>(args)...);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << duration.count() << " ms" << std::endl;
    return result;
}

int main(){

    int min = -10000;
    int max = +10000;
    int amount = 10000000;

    std::random_device rd;
    std::cout << rd() << std::endl;
    std::mt19937_64 generator(rd());
    std::uniform_int_distribution<int> dist{min, max};

    std::vector<int> v;

    while(v.size() < amount) {
        v.push_back(dist(generator));
    }

    std::sort(v.begin(), v.end());
    // v = {1, 2, 3, 4, 5, 6 };
    measure_time(nodup_v1, v);
    measure_time(nodup_v2, v);
    measure_time(nodup_v4, v);
    measure_time(nodup_v5, v);

    return EXIT_SUCCESS;
}