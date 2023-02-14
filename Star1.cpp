#include <iostream>
using namespace std;
void star(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "D";
            }
        }
        cout << endl;
    }
    for (int i = n-1; i >= 1; i--)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= n - i)
            {
                cout << " ";
            }
            else
            {
                cout << "D";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter Height" << endl;
    cin >> n;
    star(n);

    return 0;
}