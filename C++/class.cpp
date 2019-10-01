// Class

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int age, standard;
    string first_name, last_name;
public:
    void set_age(int age) { this->age = age; }
    void set_first_name(string s) { first_name = s; }
    void set_last_name(string s) { last_name = s; }
    void set_standard(int grade) { standard = grade; }
    int get_age() { return age; }
    string get_first_name() { return first_name; }
    string get_last_name() { return last_name; }
    int get_standard() { return standard; }
    string to_string()
    {
        string res, str_age, str_std;
        stringstream ss_age, ss_std;
        ss_age << age;
        ss_age >> str_age;
        ss_std << standard;
        ss_std >> str_std;
        res = str_age + ',' + first_name + ',' + last_name + ',' + str_std;
        return res;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}