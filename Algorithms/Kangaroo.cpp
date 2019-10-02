#include<bits/stdc++.h>
using namespace std;
#define ll long long

int32_t main() {
    ll int x1,v1,x2,v2;
    cin >> x1 >> v1 >> x2 >> v2;
    float a = x2-x1, b=v1-v2;
    a = a/b;
    if(((x2-x1)*(v1-v2)>=0)  && (v1!=v2) && ceil(a)==floor(a))
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}