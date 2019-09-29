// Pointer

#include <iostream>
#include <cmath>

using namespace std;

void update(int *a, int *b)
{
    int x, y;
    x = *a + *b;
    y = abs(*a - *b);
    cout << x << "\n" << y << endl;
}

int main()
{
    int a, b;
    cin >> a >> b;
    update(&a, &b);
    return 0;
}
