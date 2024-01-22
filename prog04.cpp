#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<int, string> alunos;

    alunos[9901] = "Fulano de Tal";
    alunos[9902] = "Cicrano";
    alunos[9905] = "Beltrano";

    int matr;
    cout << "Informe matrícula (0 para sair): ";
    while(cin >> matr && matr!=0){
        if(alunos.count(matr)>0)
            cout << alunos[matr] << endl;
        else 
            cout << "Not found!\n";
    }

    return 0;
}
