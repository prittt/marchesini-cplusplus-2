#include <string>
#include <unordered_map>
#include <array>

void Translate(std::string& s, const std::string& from_lst, const std::string& to_lst){
    if (from_lst.length() != to_lst.length()){
        return;
    }

    for(auto& c : s){
        auto it = std::find(from_lst.begin(), from_lst.end(), c);
        if (it != from_lst.end()){
            c = *((it - from_lst.begin()) + to_lst.begin());
        }
        // auto pos = from_lst.find(c);
        // if (pos != std::string::npos){
        //     c = to_lst[pos]; 
        // }
    }

}

void Translate2(std::string& s, const std::string& from_lst, const std::string& to_lst)
{
    if (from_lst.length() != to_lst.length()){
        return;
    }

    std::array<char, 256> arr;
    for (int i = -128; i < 128; ++i) {
        arr[128 + i] = i;
    }
    for (size_t i = 0; i < from_lst.size(); ++i) {
        arr[128 + from_lst[i]] = to_lst[i];
    }

    for(auto& c : s) {
        // auto it = m.find(c);
        // if (it != m.end()) {
        //     c = it->second;
        // }
        c = arr[128 + c];
    }
}


int main(){

    std::string s = "ciao";
    Translate2(s, "abdc", "wxzy");
    return EXIT_SUCCESS;
}
