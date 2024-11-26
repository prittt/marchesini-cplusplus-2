#include <vector>
#include <set>
#include <unordered_set>
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>

// Rimuove i nodi duplicati sfruttando la costruzione di un set
std::vector<int> nodup_v0(const std::vector<int>& v_in) {
    std::set<int> s(v_in.begin(), v_in.end());
    
    // std::set<int> s;
    // s.insert(v_in.begin(), v_in.end());

    std::vector<int> v_out(s.begin(), s.end());

    // std::vector<int> v_out;
    // v_out.insert(v_out.end(), s.begin(), s.end());

    return v_out;
}

// Rimuove i nodi duplicati sfruttando la costruzione di un unordered_set
std::vector<int> nodup_v1(const std::vector<int>& v_in) {
    std::unordered_set<int> s(v_in.begin(), v_in.end());
    
    // std::set<int> s;
    // s.insert(v_in.begin(), v_in.end());

    std::vector<int> v_out(s.begin(), s.end());

    // std::vector<int> v_out;
    // v_out.insert(v_out.end(), s.begin(), s.end());

    return v_out;
}

// Rimuove i nodi duplicati sfruttando l'ordinamento del vettore
std::vector<int> nodup_v2(const std::vector<int>& v_in) {
    std::vector<int> v_tmp = v_in;
    std::sort(v_tmp.begin(), v_tmp.end());

    // std::vector<int> v_out;
    // for(const auto& el : v_tmp) {
    //     if(v_out.empty() || el != v_out.back()) {
    //         v_out.push_back(el);
    //     }
    // }
    
    auto last = std::unique(v_tmp.begin(), v_tmp.end());
    std::vector<int> v_out(v_tmp.begin(), last);

    return v_out;
}

// Rimuove i duplicati preservando l'ordine di apparizione
std::vector<int> nodup_v3(const std::vector<int>& v_in) {
    std::vector<int> v_out;
    for(const auto& el : v_in) {
        if(std::find(v_out.begin(), v_out.end(), el) == v_out.end()) {
            v_out.push_back(el);
        }
    }
    return v_out;
}

// Rimuove i duplicati preservando l'ordine di apparizione (alternativa)


int main() {

    int min = -10000;
    int max = +10000;
    int amount = 100000000;
    // Initialize the random_device
    std::random_device rd;
    // Seed the engine
    std::mt19937_64 generator(rd());
    // Specify the range of numbers to generate, in this case [min, max]
    std::uniform_int_distribution<int> dist{min, max};
    std::vector<int> v_in;
    // Generate the random numbers
    while(v_in.size() != amount)
    {
        v_in.push_back(dist(generator));
    }

    auto start = std::chrono::high_resolution_clock::now();
    std::vector<int> v_out = nodup_v1(v_in);
    auto stop = std::chrono::high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(stop - start);
    std::cout << duration.count() << std::endl;

    return EXIT_SUCCESS;
}
