// Vector-Sort

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector <int> v;
    int n, i, var;
    cin >> n;
    for(i = 0; i < n; ++i)
    {
        cin >> var;
        v.push_back(var);
    }
    sort(v.begin(), v.end());
    for(i = 0; i < v.size(); ++i)
        cout << v[i] << " ";
    return 0;
}
