#include <iostream>
using namespace std;

int sum(int n)
{

    if (n > 0)
    {
        return n + sum(n - 1);
    }
    return 0;
}

int main()
{
    int sums;

    sums = sum(5);
    cout << sums;

    return 0;
}