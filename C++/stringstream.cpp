// StringStream

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> v;
    int i, var;
    string temp = "";
    // stringstream ss;
    for(i = 0; i < str.length(); ++i)
    {
        if(isdigit(str[i]) || str[i] == '-')
            temp += str[i];
        else
        {
            stringstream ss;
            ss << temp;
            ss >> var;
            v.push_back(var);
            temp = "";
        }
    }
    stringstream last;
    last << temp;
    last >> var;
    v.push_back(var);
    return v;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }

    return 0;
}
