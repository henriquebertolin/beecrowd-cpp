#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string, float> notas;

    notas["eu"] = 9.5;
    notas["fulano"] = 7.9;
    notas["ele"] = 7.8;
    
    cout << notas["ela"] << endl;
    cout << notas.size() << endl;
    for(auto n : notas){
        cout << n.first << ": " << n.second << endl;
    }

    return 0;
}
