// Strings

#include <iostream>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    char ch;
    string x = a, y = b;
    ch = x[0];
    x[0] = y[0];
    y[0] = ch;
    cout << x << " " << y << endl;
    return 0;
}
