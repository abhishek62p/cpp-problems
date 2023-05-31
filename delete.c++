#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N = 4;

    for (int i = 0; i < 2 * N - 1; i++)
    {
        int k = i < N ? i : 2 * (N - 1) - i;

        for (int j = 0; j < k; j++)
            cout << "1 ";

        for (int j = 0; j < 2 * (N - k) - 1; j++)
        {
            cout << "0 ";
        }

        for (int j = k - 1; j >= 0; j--)
            cout << "4 ";

        cout << endl;
    }
    return 0;
}