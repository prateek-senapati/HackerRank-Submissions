// Maps-STL

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    map<string, int> m;
    map<string, int> :: iterator i;
    int q, type, y;
    string x;
    cin >> q;
    while(q--)
    {
        cin >> type;
        switch(type)
        {
            case 1: cin >> x;
                    cin >> y;
                    i = m.find(x);
                    if(i == m.end())
                        m.insert(make_pair(x, y));
                    else
                        i->second += y;
                    break;
            case 2: cin >> x;
                    m.erase(x);
                    break;
            case 3: cin >> x;
                    i = m.find(x);
                    if(i == m.end())
                        cout << 0 << endl;
                    else
                        cout << i->second << endl;
                    break;
        }
    }
    return 0;
}
