#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n = 0;
    cin >> n;
    unordered_map<string, vector<string>> amigos;
    for (int i = 0; i < n; i++) {
        string nome;
        vector<string> presentes;
        string teste, teste2, teste3;
        cin >> nome >> teste >> teste2 >> teste3;
        presentes.push_back(teste);
        presentes.push_back(teste2);
        presentes.push_back(teste3);
        amigos[nome] = presentes;
    }
    string palpiteNome, palpitePresente;
    while (cin >> palpiteNome >> palpitePresente) {
        if (find(amigos[palpiteNome].begin(), amigos[palpiteNome].end(), palpitePresente) != amigos[palpiteNome].end()) {
            cout << "Uhul! Seu amigo secreto vai adorar o/" << endl;
        } else {
            cout << "Tente Novamente!" << endl;
        }
    }

    return 0;
}