// Structs

#include <iostream>

using namespace std;

struct student
{
    int age, standard;
    string first_name, last_name;
};

int main()
{
    student s;
    cin >> s.age >> s.first_name >> s.last_name >> s.standard;
    cout << s.age << " " << s.first_name << " " << s.last_name << " " << s.standard << endl;
    return 0;
}
