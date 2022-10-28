#include "pt4.h"
using namespace std;

int mina(int n, int &MinNum)
{
    if (n / 10 == 0)
    {
        MinNum = min(MinNum, n % 10);
        return 0;
    }
    else
    {
        MinNum = min(MinNum, n % 10);
        return mina(n / 10, MinNum);
    }
}

void Solve()
{
    Task("Reccur5");
    int number,MinNumber = 0;
    pt >> number;
    MinNumber = number % 10;
    mina(number, MinNumber);
    pt << MinNumber;
}
