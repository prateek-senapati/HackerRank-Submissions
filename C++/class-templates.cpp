// C++ Class Templates

template<class T>
class AddElements
{
    T value;
public:
    AddElements(T input) { value = input; }
    T add(T sec) { return value + sec; }
};

template<>
class AddElements<string>
{
    string value;
public:
    AddElements(string input) { value = input; }
    string concatenate(string str) { return value + str; }
};
