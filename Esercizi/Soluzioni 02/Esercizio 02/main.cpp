// Nei file translate.h e translate.cpp implementare la seguente funzione:

// void Translate(std::string& s, const std::string& from_lst, const std::string& to_lst);
// La funzione deve cercare ogni carattere di s in from_lst e se il carattere è presente, sostituirlo con l'elemento di posizione corrispondente in to_lst. Ad esempio, data la stringa s = "ciao", chiamare la funzione translate(s, "abdc", "wxzy") trasforma s in "yiwo".

// Se from_lst e to_lst hanno lunghezze diverse, la funzione non modifica s.

#include <iostream>
#include <string>


void Translate(std::string& s, const std::string& from_lst, const std::string& to_lst){
    if(from_lst.size() != to_lst.size()){
        return;
    }

    for(auto& c : s){
        auto pos = from_lst.find(c);
        if(pos != std::string::npos){
            c = to_lst[pos];
        }
    }
}

void Translate_v2(std::string& s, const std::string& from_lst, const std::string& to_lst){
    if(from_lst.size() != to_lst.size()){
        return;
    }

    for(size_t i = 0; i < s.size(); ++i){
        auto pos = from_lst.find(s[i]);
        if(pos != std::string::npos){
            s[i] = to_lst[pos];
        }
    }
}


int main(){

    std::string input = "ciao";
    std::string from_lst = "abdc";
    std::string to_lst = "wxzy";
    Translate_v2(input, from_lst, to_lst);

    return EXIT_SUCCESS;
}
