 
 
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
void length(int arr[3], int arr1[3]);
void dotproduct(int arr[3], int arr1[3]);
void parametricequ(int arr[3], int arr1[3]);
void Symmetricequ(int arr[3], int arr1[3]);
void mid_point(int arr[3], int arr1[3]);
void direction_of_vector(int arr[3], int arr1[3]);
void unit_vector(int arr[3], int arr1[3]);
void distance_between_point_and_line();
void cross_product();
void angle_between_2_planes();



 
 

int main()
{
    char userkey = 'y';
    while (userkey == 'y')
    {
        int  choice = 0, circle = 0, sphere = 0, cylinder = 0, plane = 0;
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
        { 
            cout << "1. length\n";
            cout << "2. dot product\n";
            cout << "3. the Parametric equation\n";
            cout << "4. Symmetric equation\n";
            cout << "5. distance between point and line:\n";
            cout << "6. Mid Point\n";
            cout << "7. diriction of a vector\n";
            cout << "8. unit vector\n";
            cout << "Input: ";
            cin >> circle;
            const int size = 3;
            int arr[size], arr1[size];
            if (circle != 5)
            {
                cout << " Enter point1: " << endl;
                for (int count = 0; count < size; count++)
                    cin >> arr[count];
                cout << "Enter point 2 : " << endl;
                for (int count = 0; count < size; count++)
                    cin >> arr1[count];
            }

            switch (circle)
            {
            case 1:
                length(arr, arr1);
                break;
            case 2:
                dotproduct(arr, arr1);
                break;
            case 3:
                parametricequ(arr, arr1);
                break;
            case 4:
                Symmetricequ(arr, arr1);
                break;
            case 5:
                distance_between_point_and_line();
                break;
            case 6:
                mid_point(arr, arr1);
                break;
            case 7:
                direction_of_vector(arr, arr1);
                break;
            case 8:
                unit_vector(arr, arr1);
                break;
            }
        }
        break;
        case 2:
            cout << "1. cross product\n";
            cout << "2. angle between 2 planes\n";
            cout << "Input: ";
            cin >> plane;
            switch (plane)
            {
            case 1:
                cross_product();
                break;
            case 2:
                angle_between_2_planes();
                break;
            }
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

                cin >> r >> a >> b;
                CircleEqu(r, a, b);
                break;
            case 2:
                cout << "Please enter the radius and the angle \n";
                cin >> r >> o;
                PolartoCartesian(r, o);
                break;
            case 3:
                cout << "Please enter a point\n";
                cin >> x >> y;
                CartesiantoPolar(x, y);
                break;
            }

            break;
        case 4:
        {
            cout << "1. Sphere equation\n";
            cout << "2. Convert from Spherical to Cartesian\n";
            cout << "3. Convert from Cartesian to Spherical\n";
            cout << "Input: ";
            cin >> sphere;
            switch (sphere)
            {
            case 1:
                cout << "Please enter the radius and the center of the sphere\n";
                cin >> r >> a >> b >> c;
                SphereEqu(r, a, b, c);
                break;
            case 2:
                cout << "Please enter the radius and the two angles\n";
                cin >> p >> o >> Q;
                SphericaltoCartesian(p, o, Q);
                break;
            case 3:
                cout << "Please enter a point\n";
                cin >> x >> y >> z;
                CartesiantoSpherical(x, y, z);
                break;
            }
        }
        break;
        case 5:
        {
            cout << "1. Convert from Cylindrical to Cartesian\n";
            cout << "2. Convert from Cartesian to Cylindrical\n";
            cout << "Input: ";
            cin >> cylinder;
            switch (cylinder)
            {
            case 1:
                cout << "Please enter the radius , sita and z\n";
                cin >> r >> o >> z;
                CylindricaltoCartesian(r, o, z);
                break;
            case 2:
                cout << "Please enter a point\n";
                cin >> x >> y >> z;
                CartesiantoCylindrical(x, y, z);
                break;
            }
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
void length(int arr[3], int arr1[3])
{
    int  length = 0; 
    for (int count1 = 0; count1 < 3; count1++) 
        length += (arr[count1] - arr1[count1]) * (arr[count1] - arr1[count1]); 
    cout << sqrt(length) << endl;
}
void dotproduct(int arr[3], int arr1[3])
{
    int dot_product = 0; 
    for (int count = 0; count < 3; count++)
        dot_product += arr[count] * arr1[count];
    cout << "Dot product = " << dot_product;
}
void parametricequ(int arr[3], int arr1[3])
{
    int length[3];

    cout << "Parametric equation : " << endl;

    for (int count = 0; count < 3; count++)
    {
        length[count] = arr1[count] - arr[count];
        if (count == 0)
            cout << "x = " << arr[count] << " + " << length[count] << 't' << endl;

        else if (count == 1)
            cout << "y = " << arr[count] << " + " << length[count] << 't' << endl;

        else if (count == 2)
            cout << "z = " << arr[count] << " + " << length[count] << 't' << endl;

    }
    cout << endl;
}
void Symmetricequ(int arr[3], int arr1[3])
{
    int length[3];

    for (int count = 0; count < 3; count++)
        length[count] = arr1[count] - arr[count];
    cout << endl;

    cout << "Symmetric equation : " << endl;
    for (int count = 0; count < 3; count++)
    {
        if (count == 0)
            cout << "( x + " << arr[count] * -1 << " ) / " << length[count];
        else if (count == 1)
            cout << "( y + " << arr[count] * -1 << " ) / " << length[count];
        else if (count == 2)
            cout << "( z + " << arr[count] * -1 << " ) / " << length[count];

        if (count < 2)
            cout << " = ";
    }
    cout << endl;
}

void mid_point(int arr[3], int arr1[3])
{
    float mid_point = 0.0;
    const int size = 3;
    cout << "Mid point = " << '(';
    for (int count = 0; count < size; count++)
    {
        mid_point = (arr[count] + arr1[count]) / 2;
        cout << mid_point;

        if (count < size - 1) 
            cout << ','; 
        else if (count == size - 1)
            cout << ')' << endl;
    }
}

void direction_of_vector(int arr[3], int arr1[3])
{
    int  length = 0;
    const int size = 3;
    float   direction_of_vector[size] = { 0 }, unit_vector = 0.0;

    cout << " direction_of_vector = ";
    for (int count = 0; count < size; count++)
    {
        direction_of_vector[count] = arr1[count] - arr[count];

        if (count == 0)
            cout << direction_of_vector[count] << 'i';
        else if (count == 1)
            cout << direction_of_vector[count] << 'j';
        else if (count == 2)
            cout << direction_of_vector[count] << 'k';

        if (count < size - 1)
            cout << " " << "+" << " ";

        length += direction_of_vector[count] * direction_of_vector[count];

    }

    cout << endl;

}
void unit_vector(int arr[3], int arr1[3])
{
    int  length = 0;
    const int size = 3;
    float   direction_of_vector[size] = { 0 }, unit_vector = 0.0;
    for (int count = 0; count < size; count++)
    {
        direction_of_vector[count] = arr1[count] - arr[count];
        length += direction_of_vector[count] * direction_of_vector[count];
    }
    length = sqrt(length);
    // unit vector 
    cout << "unit vector = ";
    for (int count = 0; count < size; count++)
    {
        unit_vector = direction_of_vector[count] / length;
        if (count == 0)
            cout << unit_vector << 'i';
        else if (count == 1)
            cout << unit_vector << 'j';
        else if (count == 2)
            cout << unit_vector << 'k';
        if (count < size - 1)
            cout << " + ";
    }
    cout << endl;
}
void distance_between_point_and_line()
{
    const int size = 3;
    int point[size] = { 0 }, point_of_line[size] = { 0 }, vector[size] = { 0 };
    int etgahy[size][size] = { 1,1,1 }, cross[size];
    float distance = 0.0, m3yar_cross_product = 0.0, m3yar_vector = 0.0;

    cout << " enter the point : ";
    for (int count = 0; count < size; count++)
        cin >> point[count];
    cout << " enter the point of line : ";
    for (int count = 0; count < size; count++)
        cin >> point_of_line[count];
    cout << "Enter the vector : ";
    for (int count = 0; count < size; count++)
    {
        cin >> vector[count];
        m3yar_vector += vector[count] * vector[count];
        etgahy[2][count] = vector[count];
    }
    m3yar_vector = sqrt(m3yar_vector);
    //length between point and point of line 
    int len[size] = { 0 };
    for (int count1 = 0; count1 < size; count1++)
    {
        len[count1] = point[count1] - point_of_line[count1];
        etgahy[1][count1] = len[count1];
    }

    // cross product of line  :  
    cross[0] = etgahy[0][0] * (etgahy[1][1] * etgahy[2][2] - etgahy[1][2] * etgahy[2][1]);

    cross[1] = etgahy[0][1] * (etgahy[1][0] * etgahy[2][2] - etgahy[1][2] * etgahy[2][0]);

    cross[2] = etgahy[0][2] * (etgahy[1][0] * etgahy[2][1] - etgahy[1][1] * etgahy[2][0]);

    for (int count = 0; count < size; count++) 
        m3yar_cross_product += cross[count] * cross[count]; 
    m3yar_cross_product = sqrt(m3yar_cross_product);

    distance = m3yar_cross_product / m3yar_vector;
    cout << "Distance between point and line = " << m3yar_cross_product << " / " << m3yar_vector << " = " << distance << endl;
}

void angle_between_2_planes()
{
    const int size = 3;
    int vector1[size] = { 0 }, vector2[size] = { 0 };
    float m3yar_vector1 = 0, m3yar_vector2 = 0, angle = 0, dot_product = 0;
    float cos_angle = 0;

    cout << "Enter vector1 : ";
    for (int count = 0; count < size; count++)
    {
        cin >> vector1[count];
        m3yar_vector1 += vector1[count] * vector1[count];
    }
    m3yar_vector1 = sqrt(m3yar_vector1);

    cout << "Enter vector2 : ";
    for (int count = 0; count < size; count++)
    {
        cin >> vector2[count];
        m3yar_vector2 += vector2[count] * vector2[count];
    }
    m3yar_vector2 = sqrt(m3yar_vector2); 
    //dot product 
    for (int count = 0; count < size; count++) 
        dot_product += vector1[count] * vector2[count]; 
    cos_angle = dot_product / (m3yar_vector1 * m3yar_vector2); 
    cout << " angle =  " << acos(cos_angle) * 180 / 3.14159 << endl;
}
void cross_product()
{
    int const size = 3;
    int point1[size] = { 0 }, point2[size] = { 0 }, point3[size] = { 0 }, vector1[size] = { 0 }, vector2[size] = { 0 };
    int n[size][size] = { 1,1,1 }, cross_product[size] = { 0 };

    cout << "Enter point1 : ";
    for (int count = 0; count < size; count++) 
        cin >> point1[count]; 
    cout << "Enter point2 : ";
    for (int count = 0; count < size; count++)
    {
        cin >> point2[count];
        vector1[count] = point2[count] - point1[count];
        n[1][count] = vector1[count];
    }

    cout << "Enter point3 : ";
    for (int count = 0; count < size; count++)
    {
        cin >> point3[count];
        vector2[count] = point3[count] - point1[count];
        n[2][count] = vector2[count];
    } 
    // cross product of 2 vectors 
    cross_product[0] = n[0][0] * (n[1][1] * n[2][2] - n[1][2] * n[2][1]); 
    cross_product[1] = n[0][1] * (n[1][0] * n[2][2] - n[1][2] * n[2][0]); 
    cross_product[2] = n[0][2] * (n[1][0] * n[2][1] - n[1][1] * n[2][0]); 
    for (int count = 0; count < size; count++)
    {
        if (count == 0)
            cout << cross_product[count] << " ( x + " << point1[count] * -1 << " ) + ";
        else if (count == 1)
            cout << cross_product[count] << " ( y + " << point1[count] * -1 << " ) + ";
        else if (count == 2)
            cout << cross_product[count] << " ( z + " << point1[count] * -1 << " ) = 0 "; 
    }
    cout << "\n";
}

 
 