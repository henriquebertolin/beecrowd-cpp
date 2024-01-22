// Contar e exibir a quantidade de ocorrências
// para cada caracter distinto contido em um arquivo-texto

#include <cctype>
#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream arq("gpl3.txt");
  if (!arq) {
    cout << "Erro ao abrir\n";
    return 1;
  }
  int cont[256] = {};
  char ch;
  while (arq.get(ch)) {
    cont[int(ch)]++;
  }
  for (int i = 0; i < 256; i++) {
    if (cont[i] > 0)
      cout << i << " " << (isprint(i) ? char(i) : ' ') << " " << cont[i]
           << endl;
  }

  arq.close();
}