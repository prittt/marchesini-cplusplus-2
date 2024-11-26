#include "farfallino.h"

#include <set>

// std::string CodificaFarfallino(const std::string& input){
//     std::string output;
//     for(const auto& c : input){
//         if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
//             output += c + std::string("f") + c;
//         } else {
//             output += c;
//         }
//     }
//     return output;
// }

std::string CodificaFarfallino(const std::string& input){
    std::set<char> s{'a', 'e', 'i', 'o', 'u'};
    std::string output;
    for(const auto& c : input){
        if(s.count(std::tolower(c))){
            output += c + std::string("f") + c;
        } else {
            output += c;
        }
    }
    return output;
}