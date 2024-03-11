#include <iostream>

using namespace std;

int main() {
  char subst[255];
    
  subst['1'] = '`';
  subst['2'] = '1';
  subst['3'] = '2';
  subst['4'] = '3';
  subst['5'] = '4';
  subst['6'] = '5';
  subst['7'] = '6';
  subst['8'] = '7';
  subst['9'] = '8';
  subst['0'] = '9';
  subst['-'] = '0';
  subst['='] = '-';
  subst['Q'] = '=';
  subst['W'] = 'Q';
  subst['E'] = 'W';
  subst['R'] = 'E';
  subst['T'] = 'R';
  subst['Y'] = 'T';
  subst['U'] = 'Y';
  subst['I'] = 'U';
  subst['O'] = 'I';
  subst['P'] = 'O';
  subst['['] = 'P';
  subst[']'] = '[';
  subst['\\'] = ']';
  subst['A'] = '\\';
  subst['S'] = 'A';
  subst['D'] = 'S';
  subst['F'] = 'D';
  subst['G'] = 'F';
  subst['H'] = 'G';
  subst['J'] = 'H';
  subst['K'] = 'J';
  subst['L'] = 'K';
  subst[';'] = 'L';
  subst['\''] = ';';
  subst['Z'] = '\'';
  subst['X'] = 'Z';
  subst['C'] = 'X';
  subst['V'] = 'C';
  subst['B'] = 'V';
  subst['N'] = 'B';
  subst['M'] = 'N';
  subst[','] = 'M';
  subst['.'] = ',';
  subst['/'] = '.';
  subst[' '] = ' ';

  string entrada;

  while (getline(cin, entrada)) {
    for (auto c : entrada) {
      cout << subst[c];
    }
    cout << endl;
  }
}