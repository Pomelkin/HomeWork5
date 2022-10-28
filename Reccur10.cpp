#include "pt4.h"
using namespace std;

float recur(float& sum, int n, int i, float& num)
{
    num += 0.2;
    sum += num;
    if (n == i && n!= 1)
    {
        return sum;
    }
    else
    {
        return recur(sum, n, i + 1, num);
    }
    if (n == 1) return 1;
}


void Solve()
{
    Task("Reccur10");
    int n, i = 1;
    float num = 0.8, sum = 0;
    pt >> n;
    pt << recur(sum, n, i, num);
}
