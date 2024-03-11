#include <iostream>
#include <map>
#include <iomanip>
#include <string>
 
using namespace std;
 
int main() {
    map<string, double> arvores;
    map<string, double> ::iterator itera;
    
    string arvore;
    int cases, i, total = 0;
    cout << fixed << setprecision(4);
    
    cin >> cases;
    cin.get();
    getline(cin,arvore);
    
    for (i = 1; i <= cases; i++) {
        while (getline(cin, arvore) and arvore[0] != '\0') {
            arvores[arvore]++;
            total++;
        }
        if (i > 1) {
            cout << "\n";
        }
        for (itera = arvores.begin(); itera != arvores.end(); itera++) {
            cout << itera -> first << " " << 100.0 * itera -> second / total << endl;
        }
        total = 0;
        arvores.clear();
    }
    
    return 0;
}