// Box It!

class Box
{
public:
    long long l, b, h;
    Box() { l = b = h = 0; }
    Box(int x, int y, int z) : l(x), b(y), h(z) {}
    Box(const Box &B)
    {
        l = B.l;
        b = B.b;
        h = B.h;
    }
    int getLength() { return l; }
    int getBreadth() { return b; }
    int getHeight() { return h; }
    long long CalculateVolume() { return l*b*h; }
};

bool operator<(const Box &A, const Box&B)
{
    if(A.l < B.l)
        return true;
    if(A.b < B.b && A.l == B.l)
        return true;
    if(A.h < B.h && A.b == B.b && A.l == B.l)
        return true;
    return false;
}

ostream& operator<<(ostream &stream, const Box &B)
{
    stream << B.l << ' ' << B.b << ' ' << B.h;
    return stream;
}
