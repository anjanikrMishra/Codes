#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter Height" << endl;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; i <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}