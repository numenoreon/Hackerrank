#include <iostream>

using namespace std;

class Rectangle{

    protected:
    int width;
    int height;

    public:

    void display()
    {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle{
    

    public:

    RectangleArea()
    {
        width=0;
        height=0;
    }

    //RectangleArea(int a, int b) : width(a), height(b)
    //{}

    void read_input()
    {
        int a,b;
        cin >> a >> b;
        width = a;
        height = b;
    }

    void display()
    {
        cout << width*height << endl;
    }

};

