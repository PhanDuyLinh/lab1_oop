#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
class Point3D
{
private:
    double x,y,z;
public:
    Point3D(double a,double b,double c)
    {
        x=a;
        y=b;
        z=c;
    }
    double distanceFromCenter()
    {
        return distanceForm(0,0,0);
    }
    double distanceForm(Point3D other)
    {
        return sqrt(pow(x-other.x,2)+pow(y-other.y,2)+pow(z-other.z,2));
    }
    double distanceForm(double xVal,double yVal,double zVal)
    {
        return sqrt(pow(x-xVal,2)+pow(y-yVal,2)+pow(z-zVal,2));
    }
    void details()
    {
        cout <<"x = "<<x<<" y = "<<y<<" z = "<<z;

    }
    double Max()
    {
        return max(z,max(x,y));
    }
};
int main()
{
    Point3D point1(2,3,4);
    Point3D point2(3,7,8);
    point1.details();
    point2.details();
    cout << "\nThe distance between point1 and (0,0,0) is: "<<point1.distanceFromCenter();
    cout << "\nThe distance between point1 and point2 is "<<point1.distanceForm(point2);
    cout << "\nThe max value in point1 is :"<< point1.Max();
    cout <<"\nThe max value in point2 is :"<< point2.Max();
    return 0;
}
