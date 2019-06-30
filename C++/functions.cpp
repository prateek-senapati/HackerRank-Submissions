// Functions

#include <iostream>

using namespace std;

int maxNum (int a, int b, int c, int d)
{
    int max = a;
    if(max < b)
        max = b;
    if(max < c)
        max = c;
    if(max < d)
        max = d;
    return max;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << maxNum(a, b, c, d) << endl;
    return 0;
}
