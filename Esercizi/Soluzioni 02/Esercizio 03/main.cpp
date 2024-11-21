// Esercizio 3 - Conta Parole
// Nei file conta.h e conta.cpp implementare la funzione:

// int Conta(const std::string& str);
// La funzione accetta come parametro una stringa e deve restituire quante parole sono presenti all'interno della stringa, dove con "parola" intendiamo una sequenza di caratteri diversi da spazio.

// Ad esempio, chiamare la funzione passando la stringa "  Questa e' una stringa lunga 45 caratteri.  " dovrebbe ritornare 7. Con la stringa "1 2 3 a b c" dovrebbe ritornare 6. Con la stringa "! @?$ ciao,prova" dovrebbe ritornare 3.
#include <string>
#include <sstream>

int Conta(const std::string& str) {
    int count = 0;
    bool is_word = false;
    for(const auto& c : str) {
        if(c != ' ' && !is_word) {
            is_word = true;
            ++count;
        } else if(c == ' ') {
            is_word = false;
        }
    }
    return count;
}

// Seconda versione che fa uso degli iteratori
int Conta_v2(const std::string& str) {
    int count = 0;
    bool is_word = false;
    for(auto it = str.begin(); it != str.end(); ++it) {
        if(*it != ' ' && !is_word) {
            is_word = true;
            ++count;
        } else if(*it == ' ') {
            is_word = false;
        }
    }
    return count;
}

// Terza versione che fa uso della find_first_of
int Conta_v3(const std::string& str) {
    int count = 0;
    size_t pos = 0;
    while((pos = str.find_first_not_of(' ', pos)) != std::string::npos) {
        pos = str.find_first_of(' ', pos);
        ++count;
    }
    return count;
}

//Quarta versione che fa uso dello stringstream
int Conta_v4(const std::string& str) {
    int count = 0;
    std::stringstream ss(str);
    std::string word;
    while(ss >> word) {
        ++count;
    }
    return count;
}

int main(){

    std::string input = "  Questa e' una stringa lunga 45 caratteri.";
    int count_v1 = Conta(input);
    int count_v2 = Conta_v2(input);
    int count_v3 = Conta_v3(input);
    int count_v4 = Conta_v4(input);

    return EXIT_SUCCESS;
}