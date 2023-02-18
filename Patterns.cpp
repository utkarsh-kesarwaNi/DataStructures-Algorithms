#include <iostream>
using namespace std;

int main()
{
    int N;
    cout << "Enter value of N : ";
    cin >> N;

    // SOLID RECTANGLE
    cout << "\nSOLID RECTANGLE\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // HOLLOW RECTANGLE
    cout << "\nHOLLOW RECTANGLE\n";
    for (int i = 0; i < N; i++)
    {
        if (i == 0 || i == N - 1)
        {
            for (int j = 0; j < N; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 0; j < N - 2; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << endl;
    }

    // HALF PYRAMID
    cout << "\nHALF PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // INVERTED HALF PYRAMID
    cout << "\nINVERTED HALF PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // NUMERIC HALF PYRAMID
    cout << "\nNUMERIC HALF PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    // INVERTED NUMERIC HALF PYRAMID
    cout << "\nINVERTED NUMERIC HALF PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row; col++)
        {
            cout << col + 1;
        }
        cout << endl;
    }

    // INVERTED HOLLOW HALF PYRAMID
    cout << "\nINVERTED HOLLOW HALF PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N; col++)
        {
            if (row == 0 || col == 0 || col == N - row - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    // FULL PYRAMID
    cout << "\nFULL PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    // INVERTED FULL PYRAMID
    cout << "\nINVERTED FULL PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < N - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    // HOLLOW DIAMOND
    cout << "\nHOLLOW DIAMOND\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (col == 0 || col == 2 * row)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < row; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < 2 * N - 2 * row - 1; col++)
        {
            if (col == 0 || col == 2 * N - 2 * row - 2)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    // FLIPPED SOLID DIAMOND
    cout << "\nFLIPPED SOLID DIAMOND\n";
    // PART 1 - UPPER HALF
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * row + 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < N - row; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // PART 2
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        for (int col = 0; col < 2 * N - 2 * row - 1; col++)
        {
            cout << " ";
        }
        for (int col = 0; col < row + 1; col++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // NUMERIC FULL PYRAMID
    cout << "\nNUMERIC FULL PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row - 1; col++)
        {
            cout << " ";
        }
        int start = row + 1;
        for (int col = 0; col < row + 1; col++)
        {
            cout << start;
            start++;
        }
        start = 2 * row;
        for (int col = 0; col < row; col++)
        {
            cout << start;
            start--;
        }
        cout << endl;
    }

    // NUMERIC HOLLOW PYRAMID
    cout << "\nNUMERIC HOLLOW PYRAMID\n";
    for (int row = 0; row < N; row++)
    {
        for (int col = 0; col < N - row - 1; col++)
        {
            cout << " ";
        }
        int start = 1;
        for (int col = 0; col < 2 * row + 1; col++)
        {
            if (row == 0 || row == N - 1)
            {
                if (col % 2 == 0)
                {
                    cout << start;
                    start++;
                }
                else
                {
                    cout << " ";
                }
            }
            else
            {
                if (col == 0)
                {
                    cout << 1;
                }
                else if (col == 2 * row)
                {
                    cout << row + 1;
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}