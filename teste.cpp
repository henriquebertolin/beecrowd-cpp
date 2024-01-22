#include <iostream>
#include <vector>
#include <algorithm>
#include <string>


using namespace std;

int main() {

    string teste;
    string teste2;
    cin >> teste;
   
    replace(teste.begin(), teste.end(), '.', ' ');
    for (int i = 0; i < teste.size(); i++) {
        if (teste[i] == ' ') {
            teste.erase(teste[i]);
        }
    }
    cout << teste;

    return 0;
}
