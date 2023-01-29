#include <iostream>

#define FOR(i, n) for (int i = 0; i < n; i++)
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define pb push_back
#define nline "\n"
typedef long long ll;

using namespace std;

void solve(int rows, int columns)
{
    FOR(i, rows)
    {
        if (i == 0 || i == rows - 1)
        {
            FOR(col, columns)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            FOR(i, columns - 2)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << nline;
    }
}

int main()
{
    int rowCount, columnCount;
    cin >> rowCount >> columnCount;
    solve(rowCount, columnCount);
    return 0;
}