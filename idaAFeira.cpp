#include <iostream>
#include <unordered_map>
#include <iomanip>

using namespace std;

int main() {
    int n, m, p = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        unordered_map<string, float> frutas;
        cin >> m;
        float soma = 0;
        for (int j = 0; j < m; j++) {
            string teste;
            float valor = 0;
            cin >> teste >> valor;
            frutas[teste] = valor; 
        }
        cin >> p;
        for (int j = 0; j < p; j++) {
            string teste;
            int qtd;
            cin >> teste >> qtd;
            soma += (frutas[teste] * qtd);
                //cout << soma;
        }
        cout << fixed << setprecision(2) << "R$ "<< soma << endl;
    }

    return 0;
}