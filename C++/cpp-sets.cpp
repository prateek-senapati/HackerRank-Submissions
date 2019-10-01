// Sets-STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int> s;
    int q, y, x;
    cin >> q;
    while(q--)
    {
        cin >> y >> x;
        switch(y)
        {
            case 1: s.insert(x);
                    break;
            case 2: s.erase(x);
                    break;
            case 3: set<int> :: iterator i;
                    i = s.find(x);
                    if(i == s.end())
                        cout << "No\n";
                    else
                        cout << "Yes\n";
                    break;
        }
    }
    return 0;
}
