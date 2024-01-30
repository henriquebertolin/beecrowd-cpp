#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>

using namespace std;

void teste(int a, vector<bool> &visitado, const vector<vector<int>> &grafo, int &movimentos)
{
    visitado[a] = true;
    for (int b : grafo[a])
    {
        if (!visitado[b])
        {
            movimentos += 2;
            teste(b, visitado, grafo, movimentos);
        }
    }
}

int main()
{

    int X;
    int Y;
    int W;
    int Z;

    cin >> X;

    while (X--)
    {
        cin >> Y >> W >> Z;
        vector<vector<int>> grafo(W);
        vector<bool> visitado(W, false);
        int movimentos = 0;

        for (int i = 0; i < Z; i++)
        {
            int b, a;
            cin >> b >> a;
            grafo[b].push_back(a);
            grafo[a].push_back(b);
        }

        teste(Y, visitado, grafo, movimentos);
        cout << movimentos << endl;
    }

    return 0;
}