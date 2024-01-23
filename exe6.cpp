#include <iostream>
#include <math.h>
using namespace std;
class point2;
class point1
{
    int x1, y1;
    friend void distance(point1, point2);

public:
    point1(int, int);
};

class point2
{
    int x2, y2;
    friend void distance(point1, point2);

public:
    point2(int, int);
};
point1 ::point1(int a1, int b1)
{
    x1 = a1;
    y1 = b1;
}
point2 ::point2(int a2, int b2)
{
    x2 = a2;
    y2 = b2;
}

void distance(point1 o1, point2 o2)
{

    int res = ((o2.x2 - o1.x1) ^ 2 + (o2.y2 - o1.y1) ^ 2) ^ 1 / 2;
    cout << " the distance between given points is " << res << endl;
}

int main()
{ // implicit call
    point1 p1(1, 0);

    point2 p2(1, 7);

    distance(p1, p2);

    // explicit call
    // point1 p2= point1(9, 5);
    // p1.printpoint();
    return 0;
}
