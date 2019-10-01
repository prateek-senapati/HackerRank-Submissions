// Rectangle Area

class Rectangle
{
protected:
    int width, height;
public:
    void display() { cout << width << " " << height << endl; }
};

class RectangleArea : public Rectangle
{
public:
    void read_input()
    {
        int width, height;
        cin >> width >> height;
        this->width = width;
        this->height = height;
    }
    void display() { cout << width*height << endl; }
};
