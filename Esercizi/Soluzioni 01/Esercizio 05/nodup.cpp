#include "nodup.h"

#include <set>
#include <unordered_set>
#include <algorithm>

std::vector<int> nodup_v1(const std::vector<int> &v_in){
    std::set<int> s_out(v_in.begin(), v_in.end());
    // for(const auto& x: v_in){
    //     s_out.insert(x);
    // }

    std::vector<int> v_out(s_out.begin(), s_out.end());
    // for(const auto& x: s_out){
    //     v_out.push_back(x);
    // }

    return v_out;
}

std::vector<int> nodup_v2(const std::vector<int> &v_in){
    std::unordered_set<int> s_out(v_in.begin(), v_in.end());
    std::vector<int> v_out(s_out.begin(), s_out.end());

    return v_out;
}


std::vector<int> nodup_v4(const std::vector<int> &v_in){
    
    std::vector<int> v_tmp = v_in;
    std::sort(v_tmp.begin(), v_tmp.end());

    // for(const auto& x: v_tmp){
    //     if (v_out.empty() || x != v_out.back()) {
    //         v_out.push_back(x);
    //     }
    // }

    auto last = std::unique(v_tmp.begin(), v_tmp.end());
    std::vector<int> v_out(v_tmp.begin(), last);
    return v_out;
}


std::vector<int> nodup_v5(const std::vector<int> &v_in){
    
    std::vector<int> v_out;

    for(const auto& x: v_in){
        if(std::find(v_out.begin(), v_out.end(), x) == v_out.end()){
            v_out.push_back(x);
        }
    }

    return v_out;
}
