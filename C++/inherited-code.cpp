// Inherited Code

class BadLengthException : public exception
{
    int n;
    public:
    BadLengthException(int n) { this->n = n; }
    int what() { return n; }
};
