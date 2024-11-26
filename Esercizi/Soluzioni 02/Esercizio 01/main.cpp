#include <string>
#include <set>

std::string CodificaFarfallino(const std::string& input) {
    std::set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y' };
    std::string out = "";
    for(const auto& c: input) {
        if (vowels.count(c)){
            out += c + std::string("f") + c;
        } else {
            out += c;
        }
    }
    return out;
}

int main(){

    std::string in = "ciao";
    std::string out = CodificaFarfallino(in);
    return EXIT_SUCCESS;
}