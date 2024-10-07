// Area of circle
#include <iostream>
using namespace std;
int main()
{
    float area, r;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    cout << "Area of Circle is: " << 3.14 * r * r;
    return 0;
}

// simple intrest
#include <iostream>
using namespace std;
int main()
{
    int p, r, t, SI;
    cout << "Enter the P, R, T respectively: ";
    cin >> p >> r >> t;
    SI = (p * r * t) / 100;
    cout << "Simple Intrest is: " << SI;
    return 0;
}

// volume of sphere
#include <iostream>
using namespace std;
int main()
{
    float r, v;
    cout << "Enter the Radius of sphere: ";
    cin >> r;
    v = (4 * 3.14 * r * r * r) / 3;
    cout << "Volume of Sphere is: " << v;
    return 0;
}

// volume of cylinder
#include <iostream>
using namespace std;
int main()
{
    float v, r, h;
    cout << "Enter the radius & height of cylinder: ";
    cin >> r >> h;
    v = 3.14 * r * r * h;
    cout << "Volume of cylinder is: " << v;
    return 0;
}

