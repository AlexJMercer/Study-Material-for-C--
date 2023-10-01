#include <iostream>
#include <cmath>

using namespace std;

class Point
{
    public:
        int x;
        int y;
};

class Rectangle
{
    public:
        Point A;
        Point B;

    void computeArea()
    {
        cout << "Area: " << abs(A.x - B.x) * abs(A.y - B.y) << endl;
    }
};

int main()
{
    Rectangle R = {{0, 0}, {5, 5}};
    R.computeArea();
    return 0;
}