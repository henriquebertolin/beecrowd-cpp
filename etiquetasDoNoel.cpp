#include <iostream>
#include <unordered_map>
#include <iomanip>

using namespace std;

int main() {
    int n, m = 0;
    cin >> n;
    unordered_map<string, string> natal;
    string idioma;
    string frase;
    for (int i = 0; i < n; i++) {
       // cin >> idioma >> frase;
        cin >> idioma;
        cin.ignore();
        getline (cin, frase);
        natal[idioma] = frase;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        string nome;
        string idiomaNome;
        cin.ignore();
        getline(cin, nome);
        cin >> idiomaNome;
        cout << nome << endl;
        cout << natal[idiomaNome] << endl;
        cout << endl;
    }
return 0;
}