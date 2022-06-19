#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class student
{
public:
    string name;
    int roll_no;
    void printInfo()
    {
        cout << "Name:" << endl;
        cout << name << endl;
        cout << "Roll_no:" << endl;
        cout << roll_no << endl;
    }
};

int main()
{
    student a[3];
    {
        for (int i = 0; i < 3; i++)
        {
            cin >> a[i].name;
            cin >> a[i].roll_no;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        a[i].printInfo();
    }

    return 0;
}