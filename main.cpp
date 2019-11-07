#include <iostream>
#include <map>

using namespace std;

map<string,string> DICCIONARIO;

string separate2str(string& first){
    string firstaux, second;
    bool firsthalf = true;
    for (auto a : first){
        if (firsthalf){
            if(a == ' '){
                firsthalf = false;
            } else {
                firstaux += a;
            }
        } else {
            second+=a;
        }
    }
    first = firstaux;
    return second;
}


int main() {
    string y;
    std::getline(std::cin, y);
    while (!y.empty()){
        string x = separate2str(y);
        DICCIONARIO.insert(pair<string,string>(x, y));
        std::getline(std::cin, y);
    }
    while(cin >> y){
        if (DICCIONARIO.find(y) == DICCIONARIO.end()) cout << "eh" << endl;
        else cout << DICCIONARIO.find(y)->second << endl;
    }
    return 0;
}
