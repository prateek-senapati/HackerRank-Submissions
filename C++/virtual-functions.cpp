// Virtual Functions

class Person
{
public:
    string name;
    int age;
    virtual void getdata() {}
    virtual void putdata() {}
};

class Professor : public Person
{
    int publications, cur_id;
    static int count;
public:
    void getdata()
    {
        cin >> name >> age >> publications;
        ++count;
        cur_id = count;
    }
    void putdata()
    {
        cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
    }
};

int Professor::count = 0;

class Student : public Person
{
    int cur_id, value;
    static int count;
    vector<int> marks;
public:
    void getdata()
    {
        cin >> name >> age;
        for(int i = 0; i < 6; ++i)
        {
            cin >> value;
            marks.push_back(value);
        }
        ++count;
        cur_id = count;
    }
    void putdata()
    {
        int sum = 0;
        for(int i = 0; i < marks.size(); ++i)
            sum += marks[i];
        cout << name << ' ' << age << ' ' << sum << ' ' << cur_id << endl;
    }
};

int Student::count = 0;
