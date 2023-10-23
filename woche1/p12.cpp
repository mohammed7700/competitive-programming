#include <bits/stdc++.h>
#include <iostream>

using namespace std;
using ll = long long;  
using ld = long double;

int isIn(std::string definitions[][2], int anzDef, std::string conversion[4], double factor[]);

//  need recursive function that looks if a is somewhere on the right side (a->b, c->a)
//  and if so adds rule that points to right side of a (c->b) and rekursivly for the added rule
//  and looks if b is in some other rule on the left (a->b, b->c) sind and if so a->c
//  multiplay the factors

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);

    int definitionsAnz, conversionsAnz;
    double key, value;


    std::cin >> definitionsAnz;
    std::cin >> conversionsAnz;
    //std::map<std::string, std::string> definitions;
    std::string definitions[definitionsAnz*2][2], x;
    double factor[definitionsAnz*2];

    //std::cout << "before loop 1 anz def anz: " << definitionsAnz << " con anz: "<< conversionsAnz << "\n";

    for(int i = 0; i < definitionsAnz*2; i=i+2){
        //std::cout << "in loop 1\n";
        
        std::cin >> value;
        std::cin >> definitions[i][0];
        std::cin >> x;
        std::cin >> key; 
        std::cin >> definitions[i][1];
        /* std::cout << "value : "<< value;
        std::cout << "from : "<< definitions[i][0];
        std::cout << "key : "<< key;
        std::cout << "to : "<< definitions[i][1];
        std::cout << "\n";
 */
        factor[i] = key / value;
/*         std::cout << factor[i];
        std::cout << "\n"; */
        
        definitions[i+1][0] = definitions[i][1];
        definitions[i+1][1] = definitions[i][0];

        factor[i+1] = 1/factor[i];
    }

/*     for(int i = 0; i < definitionsAnz*2; i++){

        std::cout << factor[i] << " ";
        std::cout << definitions[i][0] << " ";
        std::cout << " / ";
        std::cout << definitions[i][1] << " ";
        std::cout << "\n";
    }  */
    int anz,result;
    std::string from, to, dest;

    //std::cout << "before loop 2\n";

    for(int i = 0; i < conversionsAnz; i++) {

        //std::cout << "in loop 2\n";
        std::cin >> anz;
        std::cin >> from; 
        std::cin >> to;
        std::cin >> dest;
        //std::cout << anz << " " << from << " " << to << " " << dest << "\n";
        std::string conversion[]= {std::to_string(anz), from, dest};
        /* for(int i = 0; i < 3; i++)
            std::cout << conversion[i]; 
        std::cout << "\n";*/
        result = isIn(definitions,definitionsAnz*2, conversion, factor);
        //std::cout << result << "<- result \n";
        //std::cout<< (-1 == result ) ? "impossible\n" : std::to_string(result)+"\n";

        if(-1 == result) {

            std::cout << " impossible\n";

        } else {

            std::cout << result << "\n";
        }
    }

    return 0;
}

int isIn(std::string definitions[][2], int anzDef, std::string conversion[3], double factor[]) {

    for(int i = 0; i < anzDef; i++){

        /* if(conversion[1].compare(definitions[i][0]) == 0) {
            std::cout << "true first \n";
        }

        if(conversion[2].compare(definitions[i][1]) == 0) {
            std::cout << "true secound \n";
        } */

        if((conversion[1].compare(definitions[i][0]) == 0) && (conversion[2].compare(definitions[i][1]) == 0)) {
            int prodcut = std::stod(conversion[0])*factor[i];
            return prodcut;
        }
    }

    return -1;
}

signed main() {

}