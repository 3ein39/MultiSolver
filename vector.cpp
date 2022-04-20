 
 
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cctype> 
#include <sstream> 
#include <stdlib.h>
using namespace std;

void  CircleEqu(double r, double a, double b);
void  PolartoCartesian(double r, double o);
void  CartesiantoPolar(double x, double y);
void  SphereEqu(double r, double a, double b, double c);
void  SphericaltoCartesian(double p, double o, double Q);
void  CartesiantoSpherical(double x, double y, double z);
void  CylindricaltoCartesian(double r, double o, double z);
void  CartesiantoCylindrical(double x, double y, double z);

 





 

int main()
{
    char userkey = 'y';
    while (userkey == 'y')
    {
        int  choice = 0, circle = 0, sphere = 0, cylinder = 0;
        double o = 0, a = 0, b = 0, c = 0, r = 0, x = 0, y = 0, z = 0, Q = 0, p = 0;

        cout << "             *****Welcome to vector solver******\n";
        cout << "Please enter what the topic do you want?\n";
        cout << "1. Line\n";
        cout << "2. Plane\n";
        cout << "3. Circle\n";
        cout << "4. Sphere\n";
        cout << "5. Cylinder\n"; 
        cout << "Input: ";
        cin >> choice;
        cout << "\n";
        switch (choice)
        {
        case 1:
            /*const int size = 3;
            int arr[size], arr1[size]; 
            cout << " Enter point1: " << endl;
            for (int count = 0; count < size; count++) 
                cin >> arr[count]; 
            cout << "Enter point 2 : " << endl;
            for (int count = 0; count < size; count++) 
                cin >> arr1[count];
            cout << "1. length\n";
            cout << "2. dot product\n";
            cout << "3. the Parametric equation\n";
            cout << "4. Symmetric equation\n";
            cout << "5. distance between point and line:\n"; 
            cout << "Input: ";
            cin >> circle;
            switch (circle)
            {
            case 1:
                length(arr,arr1); 
                break;
            case 2:
                dotproduct(arr, arr1);
                break;
            case 3:
                parametricequ(arr, arr1);
                break;
            case 4:
                Symmetricequ(arr,arr1);

            }*/
            break;

        case 3:
            
            cout << "1. Circle equation\n";
            cout << "2. Convert from Polar to Cartesian\n";
            cout << "3. Convert from Cartesian to Polar\n";
            cout << "Input: ";
            cin >> circle;
            switch (circle)
            {
            case 1:
                cout << "Please enter the radius and the center of the circle\n"; 
                 
                cin>>r>> a >> b;
                CircleEqu(r,a,b);
                break;
            case 2:
                cout << "Please enter the radius and the angle \n"; 
                cin >> r >>o;
                PolartoCartesian(r,o);
                break;
            case 3:
                cout << "Please enter a point\n";
                cin >> x >> y;
                CartesiantoPolar(x,y);
                break;

            } 
            break;
        case 4:
            cout << "1. Sphere equation\n";
            cout << "2. Convert from Spherical to Cartesian\n";
            cout << "3. Convert from Cartesian to Spherical\n";
            cout << "Input: ";
            cin >> sphere;
            switch (sphere)
            {
            case 1:
                cout << "Please enter the radius and the center of the sphere\n";
                cin >> r >> a >> b>>c;
                SphereEqu(r, a, b,c);
                break;
            case 2:
                cout << "Please enter the radius and the two angles\n";
                cin >> p >> o>>Q;
                SphericaltoCartesian(p,o,Q);
                break;
            case 3:
                cout << "Please enter a point\n";
                cin >> x >> y>>z;
                CartesiantoSpherical(x, y,z);
                break;
            }
            break;
        case 5: 
            cout << "1. Convert from Cylindrical to Cartesian\n";
            cout << "2. Convert from Cartesian to Cylindrical\n";
            cout << "Input: ";
            cin >> cylinder;
            switch (cylinder)
            { 
            case 1:
                cout << "Please enter the radius , sita and z\n";
                cin >> r >> o >> z;
                CylindricaltoCartesian(r,o,z);
                break;
            case 2:
                cout << "Please enter a point\n";
                cin >> x >> y >> z;
                CartesiantoCylindrical(x, y, z);
                break;
            }
            break;
        }
        cout << "thanks, do you want to continue 'y' or 'n'\n";
         cin >> userkey;
    }
}
void CircleEqu(double r, double a, double b)
{
    cout << "the equation of the circle is \n";
    cout << "(x-" << a << ")^2 + (y-" << b << ")^2 = " << pow(r, 2) << "\n";
}
void  PolartoCartesian(double r, double o)
{
    cout << "x = " << r * cos(o * 3.14159 / 180) << " , ";
    cout << "y = " << r * sin(o * 3.14159 / 180) << "\n";

}
void  CartesiantoPolar(double x, double y)
{
    double r = sqrt(pow(x, 2) + pow(y, 2));
    double o = atan(y / x) * 180 / 3.14159;
    cout << "r = " << r << " , sita = " << o << "\n";
}
void SphereEqu(double r, double a, double b, double c)
{
    cout << "the equation of the sphere is \n";
    cout << "(x-" << a << ")^2 + (y-" << b << ")^2 + (z-" << c << ")^2 = " << pow(r, 2) << "\n";
}
void  SphericaltoCartesian(double p, double o, double Q)
{
    cout << "x = " << p * cos(o * 3.14159 / 180) * sin(Q * 3.14159 / 180) << " , ";
    cout << "y = " << p * sin(o * 3.14159 / 180) * sin(Q * 3.14159 / 180) << " , ";
    cout << "z = " << p * cos(Q * 3.14159 / 180) << "\n";
}
void  CartesiantoSpherical(double x, double y, double z)
{
    double p = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    double o = atan(y / x) * 180 / 3.14159;
    double Q = acos(z / p) * 180 / 3.14159;
    cout << "p = " << p << " , sita = " << o << " , Q = " << Q << "\n";
}
void  CylindricaltoCartesian(double r, double o, double z)
{
    cout << "x = " << r * cos(o * 3.14159 / 180) << " , ";
    cout << "y = " << r * sin(o * 3.14159 / 180) << " , ";
    cout << "z = " << z << "\n";
}
void  CartesiantoCylindrical(double x, double y, double z)
{
    double r = sqrt(pow(x, 2) + pow(y, 2));
    double o = atan(y / x) * 180 / 3.14159;
    cout << "r = " << r << " , sita = " << o << " , z = " << z << "\n";
}


 
 