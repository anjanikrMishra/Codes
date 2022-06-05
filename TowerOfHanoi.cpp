#include <iostream>
using namespace std;
void TowerOFHanoi(int n, char src, char dst, char helper)
{
    if (n == 0)
    {
        return;
    }
    TowerOFHanoi(n - 1, src, helper, dst);
    cout << "Move From" << src << "To" << dst << endl;
    TowerOFHanoi(n - 1, helper, dst, src);
}
int main()
{
    int n;
    cin >> n;
    TowerOFHanoi(n, 'A', 'B', 'C');
    return 0;
}