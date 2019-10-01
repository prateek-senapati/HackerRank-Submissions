// C++ Class Template Specialization

template <>
struct Traits<Color>
{
    static string name(int num)
    {
        Color color = static_cast<Color>(num);
        switch (color) {
            case Color::red: return "red";
            case Color::green: return "green";
            case Color::orange: return "orange";
        }
        return "unknown";
    }
};

template<>
struct Traits<Fruit>
{
    static string name(int num)
    {
        Fruit fruit = static_cast<Fruit>(num);
        switch (fruit) {
            case Fruit::apple: return "apple";
            case Fruit::orange: return "orange";
            case Fruit::pear: return "pear";
        }
        return "unknown";
    }
};
