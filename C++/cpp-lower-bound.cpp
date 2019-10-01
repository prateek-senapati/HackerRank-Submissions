// Lower Bound-STL

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, i, a, q, y;
    vector<int> v;
    vector<int> :: iterator iter;
    cin >> n;
    for(i = 0; i < n; ++i)
    {
        cin >> a;
        v.push_back(a);
    }
    cin >> q;
    for(i = 0; i < q; ++i)
    {
        cin >> y;
        cout << (binary_search(v.begin(), v.end(), y) ? "Yes " : "No ");
        iter = lower_bound(v.begin(), v.end(), y);
        cout << iter - v.begin() + 1 << endl;
    }
    return 0;
}
