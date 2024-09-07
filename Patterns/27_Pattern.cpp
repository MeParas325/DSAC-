#include <iostream>
using namespace std;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i < 2 * n; i++)
    {

        if (i <= n)
        {
            for (int j = 1; j <= i; j++) cout << "*";

            for (int j = 1; j <= 2 * n - 2 * i; j++) cout << " ";

            for (int j = 1; j <= i; j++) cout << "*";

            cout << endl;
            
        } else {

            for(int j = 1; j <= 2 * n - i; j++) cout << "*";

            for(int j = 1; j <= 2 * i - 2 * n; j++) cout << " ";

            for(int j = 1; j <= 2 * n - i; j++) cout << "*";

            cout << endl;
        }
    }

    return 0;
}