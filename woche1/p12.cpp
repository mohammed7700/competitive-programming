
#include <bits/stdc++.h>
#include <map>

int main() {

    int definitionsAnz, conversionsAnz, x;
    double key, value;

    std::cin >> definitionsAnz, conversionsAnz;
    //std::map<std::string, std::string> definitions;
    std::string definitions[definitionsAnz][2];
    double faktor[definitionsAnz*2];

    for(int i = 0; i < definitionsAnz; i++){

        std::cin >> value;
        std::cin >> definitions[i][0];
        std::cin >> key; 
        std::cin >> definitions[i][1];

        faktor[i] = value / key;
    }

    for(int i = definitionsAnz; i < definitionsAnz*2; i++) {

        definitions[i][0] = definitions[i-definitionsAnz][0];
        definitions[i][1] = definitions[i-definitionsAnz][1];

        faktor[i] = 1/faktor[i-definitionsAnz]; 
    }

    int anz;
    std::string from, to;

    for(int i = 0; i < definitionsAnz; i++) {

        std::cin >> anz, from, to;


    }

}

int isIn(std::string definitions[], std::string ) {

    
}