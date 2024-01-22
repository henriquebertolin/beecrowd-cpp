#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    vector<string> paises = {"brasil", "alemanha", "austria", "coreia", "espanha", "grecia",
        "estados-unidos", "inglaterra", "australia", "portugal", "suecia", "turquia",
        "argentina", "chile", "mexico", "antardida", "canada", "irlanda", "belgica", "italia", "libia",
        "siria", "marrocos", "japao"};

    vector<string> natal = {"Feliz Natal!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!",
        "Feliz Navidad!", "Kala Christougena!", "Merry Christmas!", "Merry Christmas!",
        "Merry Christmas!", "Feliz Natal!", "God Jul!", "Mutlu Noeller", "Feliz Navidad!",
        "Feliz Navidad!", "Feliz Navidad!", "Merry Christmas!", "Merry Christmas!",
        "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Buon Natale!", "Buon Natale!",
        "Milad Mubarak!", "Milad Mubarak!", "Merii Kurisumasu!"};

    string teste;
    while (cin >> teste) {

        bool encontrado = false;
        for (int i = 0; i < paises.size(); i++) {
            if (teste == paises[i]) {
                cout << natal[i] << endl;
                encontrado = true;
            }
        }

        if (!encontrado) {
            cout << "--- NOT FOUND ---" << endl;
        }
    }

    return 0;
}
