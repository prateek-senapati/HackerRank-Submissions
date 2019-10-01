// Overload Operators

Complex operator+(const Complex&z1, const Complex&z2)
{
    Complex res;
    res.a = z1.a + z2.a;
    res.b = z1.b + z2.b;
    return res;
}

ostream& operator<<(ostream &stream, const Complex &z)
{
    stream << z.a << "+i" << z.b << endl;
    return stream;
}
