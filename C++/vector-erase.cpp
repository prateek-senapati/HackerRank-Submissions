// Vector-Erase

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> arr;
    int n, i, var, x, a, b;
    cin >> n;
    for(i = 0; i < n; ++i)
    {
        cin >> var;
        arr.push_back(var);
    }
    cin >> x;
    arr.erase(arr.begin() + (x - 1));
    cin >> a >> b;
    arr.erase(arr.begin() + (a - 1), arr.begin() + (b - 1));
    cout << arr.size() << endl;
    for(i = 0; i < arr.size(); ++i)
        cout << arr[i] << " ";
    return 0;
}
