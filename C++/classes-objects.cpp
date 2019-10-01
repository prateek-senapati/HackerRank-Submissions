// Classes and Objects

class Student
{
    int scores[5];
    public:
    void input();
    int calculateTotalScore();
};

void Student::input()
{
    int i;
    for(i = 0; i < 5; ++i)
        cin >> scores[i];
}

int Student::calculateTotalScore()
{
    int total = 0, i;
    for(i = 0; i < 5; ++i)
        total += scores[i];
    return total;
}
