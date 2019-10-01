// Variable Sized Arrays

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, q, val, i, j, k;
    cin >> n >> q;
    vector<int> arr[n];
    for(i = 0; i < n; ++i)
    {
        cin >> k;
        for(j = 0; j < k; ++j)
        {
            cin >> val;
            arr[i].push_back(val);
        }
    }
    for(i = 0; i < q; ++i)
    {
        cin >> j >> k;
        cout << arr[j].at(k) << endl;
    }
    return 0;
}
