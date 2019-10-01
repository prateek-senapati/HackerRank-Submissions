// Overloading Ostream Operator

ostream& operator<<(ostream& stream, const Person &object)
{
    string first, last;
    first = object.get_first_name();
    last = object.get_last_name();
    stream << "first_name=" << first << ",last_name=" << last;
    return stream;
}
