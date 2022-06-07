#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>
#include <cctype> 
#include <sstream> 
#include <stdlib.h>
using namespace std;

void distance_between_2_points(double arr1[], double arr2[]);
void componant_form(double arr1[], double arr2[]);
void length_or_magnitude_of_the_vector(double arr1[]);
void add_2_vector(double arr1[], double arr2[]);
void subtract_2_vectors(double arr1[], double arr2[]);
void mid_point(double arr1[], double arr2[]);
void unit_vector_2_points(double arr1[], double arr2[]);
void unit_vector_1_point(double arr1[]);
void dotproduct_2_points(double arr1[], double arr2[]);
void dotproduct();
void angle_between_2_vectors_or_2_plane(double arr1[], double arr2[]);
void cross_product_2_points(double arr1[], double arr2[]);
void vector_equation_of_line(double arr1[], double arr2[]);
void vector_equ_of_line_2_points(double arr1[], double arr2[]);
void parametric_equation(double arr1[], double arr2[]);
void parametric_equ_2_points(double arr1[], double arr2[]);
void symmetric_equation(double arr1[], double arr2[]);
void symmetric_equ_2_points(double arr1[], double arr2[]);
void vector_equation_of_plane(double arr1[], double arr2[]);
void scalar_equation_of_plane(double arr1[], double arr2[]);
void general_equation_of_plane(double arr1[], double arr2[]);
void  CircleEqu(double r, double a, double b);
void  PolartoCartesian(double r, double o);
void  CartesiantoPolar(double x, double y);
void  SphereEqu(double r, double a, double b, double c);
void  SphericaltoCartesian(double p, double o, double Q);
void  CartesiantoSpherical(double x, double y, double z);
void  CylindricaltoCartesian(double r, double o, double z);
void  CartesiantoCylindrical(double x, double y, double z);
int check(string num[]);
int check1(string num);

int main()
{
	char userkey = 'y';
	while (userkey == 'y')
	{
		string choice,ar3[3],ar4[4],Q,W,E;
		int  circle = 0, sphere = 0, cylinder = 0,f=1,p=1;
		double arr1[3] = { 0.0 }, arr2[3] = { 0.0 }, arr3[3] = { 0.0 };
		double o = 0, a = 0, b = 0, c = 0, r = 0, x = 0, y = 0, z = 0, q = 0, P = 0;

		cout << "             *****Welcome to vector solver******\n";
		cout << "Please enter what the topic do you want?\n";
		cout << "1- one point or one vector \n";
		cout << "2- two point or two vectors \n";
		cout << "3- dot product with angle and length \n";
		cout << "4- line equations \n";
		cout << "5- plane equations \n";
		cout << "6- Circle\n";
		cout << "7- Sphere\n";
		cout << "8- Cylinder\n";

		cout << "enter your choice : ";
		cin >> choice;
		while (choice.size()>1 || (choice[0]<'1' || choice[0]>'8'))
		{
			cout << "enter tne correct choice please : ";
			cin >> choice;
		}
		switch (choice[0])
		{
		case '1':
			cout << "1- length or magnitude of the vector \n";
			cout << "2- unit vector \n";

			cout << "enter your choice : ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'2'))
			{
				cout << "enter tne correct choice please : ";
				cin >> choice;
			}
			// enter the point
			cout << "enter the point : \n";
			for (int count = 0; count < 3; count++)
				cin >> ar3[count];
			
			while (f)
			{
				if (check(ar3) == 1)
				{
					cout << "please enter valid input : ";
					cin >> ar3[0] >> ar3[1] >> ar3[2];
				}
				else
					f = 0;
			}
			f = 1;
			for(int i=0;i<3;i++)
				arr1[i] = stod(ar3[i]);

			switch (choice[0])
			{
			case '1':
				length_or_magnitude_of_the_vector(arr1);
				break;

			case '2':
				unit_vector_1_point(arr1);
				break;
			}
			break;

		case '2':
			cout << "1- distance between 2 points \n";
			cout << "2- componant form \n";
			cout << "3- add 2 vector \n";
			cout << "4- subtract 2 vectors \n";
			cout << "5- mid point \n";
			cout << "6- unit vector \n";
			cout << "7- dotproduct \n";
			cout << "8- angle between 2 vectors \n";
			cout << "9- cross product \n";

			cout << "enter your choice : ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'9'))
			{
				cout << "enter tne correct choice please : ";
				cin >> choice;
			}

			cout << "enter point1 or vector1 : \n";                 // enter points
			for (int count = 0; count < 3; count++)
				cin >> ar3[count];

			while (f)
			{
				if (check(ar3) == 1)
				{
					cout << "please enter valid input : ";
					cin >> ar3[0] >> ar3[1] >> ar3[2];
				}
				else
					f = 0;
			}
			f = 1;
			for (int i = 0; i < 3; i++)
				arr1[i] = stod(ar3[i]);

			cout << "enter point2 or vector2 : \n";
			for (int count = 0; count < 3; count++)
				cin >> ar4[count];
			
			while (f)
			{
				if (check(ar4) == 1)
				{
					cout << "please enter valid input : ";
					cin >> ar4[0] >> ar4[1] >> ar4[2];
				}
				else
					f = 0;
			}
			f = 1;
			for (int i = 0; i < 3; i++)
				arr2[i] = stod(ar4[i]);

			
			switch (choice[0])
			{
			case '1':
				distance_between_2_points(arr1, arr2);
				break;

			case '2':
				componant_form(arr1, arr2);
				break;

			case '3':
				add_2_vector(arr1, arr2);
				break;

			case '4':
				subtract_2_vectors(arr1, arr2);
				break;

			case '5':
				mid_point(arr1, arr2);
				break;

			case '6':
				unit_vector_2_points(arr1, arr2);

				break;

			case '7':
				dotproduct_2_points(arr1, arr2);
				break;

			case '8':
				angle_between_2_vectors_or_2_plane(arr1, arr2);
				break;

			case '9':
				cross_product_2_points(arr1, arr2);
				break;
			}

			break;

		case '3':
			dotproduct();
			break;

		case '4':                            /////////// line equation
			cout << "1- point and vector \n";
			cout << "2- two points \n";

			cout << "enter your choice : ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'2'))
			{
				cout << "enter tne correct choice please : ";
				cin >> choice;
			}
			switch (choice[0])
			{
			case '1': //point and vector
				cout << "1- vector equation of the line \n";
				cout << "2- parametric equation of the line \n";
				cout << "3- symmetric equation of the line \n";

				cout << "enter your choice : ";
				cin >> choice;

				while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'3'))
				{
					cout << "enter tne correct choice please : ";
					cin >> choice;
				}

				cout << "enter the point : \n";                 // enter points

				
				for (int count = 0; count < 3; count++)
					cin >> ar3[count];

				while (f)
				{
					if (check(ar3) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar3[0] >> ar3[1] >> ar3[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr1[i] = stod(ar3[i]);
			
				cout << "enter the vector : \n";
				for (int count = 0; count < 3; count++)
					cin >> ar4[count];

				while (f)
				{
					if (check(ar4) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar4[0] >> ar4[1] >> ar4[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr2[i] = stod(ar4[i]);


				switch (choice[0])
				{
				case '1':   //vector equation
					vector_equation_of_line(arr1, arr2);
					break;

				case '2':
					parametric_equation(arr1, arr2);
					break;

				case '3':
					symmetric_equation(arr1, arr2);
					break;

				}

				break;
			case '2': //two points
				cout << "1- vector equation of the line \n";
				cout << "2- parametric equation of the line \n";
				cout << "3- symmetric equation of the line \n";

				cout << "enter your choice : ";
				cin >> choice;
				while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'3'))
				{
					cout << "enter tne correct choice please : ";
					cin >> choice;
				}

				cout << "enter point1 : \n";                 // enter points
				
				for (int count = 0; count < 3; count++)
					cin >> ar3[count];

				while (f)
				{
					if (check(ar3) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar3[0] >> ar3[1] >> ar3[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr1[i] = stod(ar3[i]);
				
				cout << "enter point2 : \n";
				for (int count = 0; count < 3; count++)
					cin >> ar4[count];

				while (f)
				{
					if (check(ar4) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar4[0] >> ar4[1] >> ar4[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr2[i] = stod(ar4[i]);

				switch (choice[0])
				{
				case '1':
					vector_equ_of_line_2_points(arr1, arr2);
					break;
				case '2':
					parametric_equ_2_points(arr1, arr2);
					break;

				case '3':
					symmetric_equ_2_points(arr1, arr2);
					break;

				}

				break;
			}
			break;

		case '5':                                         ////////// plane equations
			cout << "1- point and vector \n";
			cout << "2- two vectors \n";

			cout << "enter your choice : ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'2'))
			{
				cout << "enter tne correct choice please : ";
				cin >> choice;
			}
			switch (choice[0])
			{
			case '1': //point and vector
				cout << "1- vector equation of the plane \n";
				cout << "2- scalar equation of the plane \n";
				cout << "3- general or linear equation of the plane \n";

				cout << "enter your choice : ";
				cin >> choice;

				while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'3'))
				{
					cout << "enter tne correct choice please : ";
					cin >> choice;
				}

				cout << "enter the point : \n";                 // enter points
				
				for (int count = 0; count < 3; count++)
					cin >> ar3[count];

				while (f)
				{
					if (check(ar3) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar3[0] >> ar3[1] >> ar3[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr1[i] = stod(ar3[i]);

				cout << "enter the vector : \n";
				for (int count = 0; count < 3; count++)
					cin >> ar4[count];

				while (f)
				{
					if (check(ar4) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar4[0] >> ar4[1] >> ar4[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr2[i] = stod(ar4[i]);


				switch (choice[0])
				{
				case '1':   //vector equation
					vector_equation_of_plane(arr1, arr2);
					break;

				case '2':
					scalar_equation_of_plane(arr1, arr2);
					break;

				case '3':
					general_equation_of_plane(arr1, arr2);
					break;

				}
				break;

			case '2':
				cout << "angle between two planes \n";

				cout << "enter the first normal vector : \n";                 // enter points
			
				for (int count = 0; count < 3; count++)
					cin >> ar3[count];

				while (f)
				{
					if (check(ar3) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar3[0] >> ar3[1] >> ar3[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr1[i] = stod(ar3[i]);
			
				cout << "enter the second normal vector : \n";
				for (int count = 0; count < 3; count++)
					cin >> ar4[count];

				while (f)
				{
					if (check(ar4) == 1)
					{
						cout << "please enter valid input : ";
						cin >> ar4[0] >> ar4[1] >> ar4[2];
					}
					else
						f = 0;
				}
				f = 1;
				for (int i = 0; i < 3; i++)
					arr2[i] = stod(ar4[i]);

				angle_between_2_vectors_or_2_plane(arr1, arr2);
				break;
			}
			break;

		case '6':                    ////// circle
			cout << "1. Circle equation\n";
			cout << "2. Convert from Polar to Cartesian\n";
			cout << "3. Convert from Cartesian to Polar\n";
			cout << "Input: ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'3'))
			{
				cout << "enter tne correct choice please : ";
				cin >> choice;
			}

			switch (choice[0])
			{
			case '1':
				
				cout << "Please enter the radius\n";
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				r = stod(Q);
				cout << " the center of the circle\n"<< "x : ";
				cin >> W;
				while (p)
				{
					if (check1(W) == 1)
					{
						cout << "please enter valid input : ";
						cin >> W;
					}
					else
						p = 0;
				}
				p = 1;
				cout << "\ny : ";
				cin>> E;
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				a = stod(W);
				b = stod(E);
				CircleEqu(r, a, b);
				break;
			case '2': 
				cout << "Please enter the radius :";
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				r = stod(Q);

				cout << "\n the angle : "; 
				cin >> E;
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				o = stod(E);
				PolartoCartesian(r, o);
				break;
			case '3':
				cout << "\nPlease enter the point : ";
				cout << "x = ";
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				x = stod(Q);
				cout << "\n y = ";
				cin >> E;
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				y = stod(E);
				CartesiantoPolar(x, y);
				break;
			}
			break;
			///////// sphere
		case '7':
			cout << "1. Sphere equation\n";
			cout << "2. Convert from Spherical to Cartesian\n";
			cout << "3. Convert from Cartesian to Spherical\n";
			cout << "Input: ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'3'))
			{
				cout << "enter tne correct choice please : ";
				cin >>choice;
			}

			switch (choice[0])
			{
			case '1':
				cout << "Please enter the radius : "; 
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				r = stod(Q);
				cout << "\n the center of the sphere\n";
				cin >> Q >> W >> E;
				while (f)
				{
					ar3[0] = Q;  ar3[1] = W;  ar3[2] = E;
					if (check(ar3) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q >> W >> E;
					}
					else
						f = 0;
				}
				f = 1;

				a = stod(Q);
				b = stod(W);
				c = stod(E);
				SphereEqu(r, a, b, c);
				break;
			case '2':
				cout << "Please enter the radius : "; 
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				P = stod(Q);
				cout << " \nEnter the first angles : ";
				cin >> W;
				while (p)
				{
					if (check1(W) == 1)
					{
						cout << "please enter valid input : ";
						cin >> W;
					}
					else
						p = 0;
				}
				p = 1;

				cout << "\nEnter the second angle : ";
				cin>> E; 
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				o = stod(W);
				q = stod(E);
				SphericaltoCartesian(P, o, q);
				break;
			case '3':
				cout << "Please enter the point\nx : ";
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				x = stod(Q);
				cout << "\n y : ";
				cin >> E;
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				y = stod(E);
				cout << "\n z = ";
				cin >> W;
				while (p)
				{
					if (check1(W) == 1)
					{
						cout << "please enter valid input : ";
						cin >> W;
					}
					else
						p = 0;
				}
				p = 1;
				z = stod(W);
				CartesiantoSpherical(x, y, z);
				break;
			}
			break;
			////////// Cylinder
		case '8':
			cout << "1. Convert from Cylindrical to Cartesian\n";
			cout << "2. Convert from Cartesian to Cylindrical\n";
			cout << "Input: ";
			cin >> choice;

			while (choice.size() > 1 || (choice[0] < '1' || choice[0]>'2'))
			{
				cout << "enter tne correct choice please : ";
				cin >> choice;
			}
			switch (choice[0])
			{
			case '1':
				cout << "Please enter the radius : ";
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				r = stod(Q);
				cout << "\nsita : ";
				cin >> E;
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				o = stod(E);
				cout << "\nz : ";
				cin >> W;
				while (p)
				{
					if (check1(W) == 1)
					{
						cout << "please enter valid input : ";
						cin >> W;
					}
					else
						p = 0;
				}
				p = 1;
				z = stod(W);
				CylindricaltoCartesian(r, o, z);
				break;
			case '2':
				cout << "Please enter the point\nx : ";
				cin >> Q;
				while (p)
				{
					if (check1(Q) == 1)
					{
						cout << "please enter valid input : ";
						cin >> Q;
					}
					else
						p = 0;
				}
				p = 1;
				x = stod(Q);
				cout << "\n y : ";
				cin >> E;
				while (p)
				{
					if (check1(E) == 1)
					{
						cout << "please enter valid input : ";
						cin >> E;
					}
					else
						p = 0;
				}
				p = 1;
				y = stod(E);
				cout << "\nz : ";
				cin >> W;
				while (p)
				{
					if (check1(W) == 1)
					{
						cout << "please enter valid input : ";
						cin >> W;
					}
					else
						p = 0;
				}
				p = 1;
				z = stod(W);
				CartesiantoCylindrical(x, y, z);
				break;
			}
			break;
		}

		cout << "thanks, do you want to continue 'y' or 'n'\n";
		cin >> userkey;

	}
	return 0;
}
//////// functions
// 2points
// 2points need

//distance between 2 points 
void distance_between_2_points(double arr1[], double arr2[])
{
	double distance_between_2points = 0.0;

	for (int count = 0; count < 3; count++)
		distance_between_2points += (arr2[count] - arr1[count]) * (arr2[count] - arr1[count]);

	cout << "distance between 2 points = " << sqrt(distance_between_2points) << endl;

}
//the companant form 
// need 2 points
void componant_form(double arr1[], double arr2[])
{
	cout << "the component form : \n";
	cout << "V = p1p2 = ( ";
	for (int count = 0; count < 3; count++)
	{
		cout << arr2[count] - arr1[count];

		if (count < 3 - 1)
			cout << ",";

	}
	cout << " ) \n";
}
// one vector
// one point need  
//length or magnitude of the vector
void length_or_magnitude_of_the_vector(double arr1[])
{
	double lengthormagnitude_of_vector = 0.0;

	for (int count = 0; count < 3; count++)
		lengthormagnitude_of_vector += arr1[count] * arr1[count];
	lengthormagnitude_of_vector = sqrt(lengthormagnitude_of_vector);

	cout << "the length or magnitude of the vector = " << lengthormagnitude_of_vector << endl;
}
// two vectors
// two points need
//add 2 vectors
void add_2_vector(double arr1[], double arr2[])
{
	cout << "add two vectors : \n";
	cout << "vector1 + vector2 = ( ";
	for (int count = 0; count < 3; count++)
	{
		cout << arr1[count] + arr2[count];
		if (count < 2)
			cout << ",";
	}
	cout << " ) \n";
}

// subtract 2 vectors
void subtract_2_vectors(double arr1[], double arr2[])
{
	cout << "subtract two vectors : \n";
	cout << "vector1-vector2 = ( ";
	for (int count = 0; count < 3; count++)
	{
		cout << arr1[count] - arr2[count];
		if (count < 2)
			cout << ",";
	}
	cout << " ) \n";

}
//midpoint
// need 2 points
void mid_point(double arr1[], double arr2[])
{
	double mid_point = 0.0;
	cout << "Mid point = " << '(';
	for (int count = 0; count < 3; count++)
	{
		mid_point = (arr1[count] + arr2[count]) / 2;
		cout << mid_point;

		if (count < 2)
			cout << ',';
		else if (count == 2)
			cout << ')' << endl;
	}
}

//unit vector
// need 2 points
void unit_vector_2_points(double arr1[], double arr2[])
{
	double vector[3] = { 0.0 }, length = 0;

	for (int count = 0; count < 3; count++)
	{
		vector[count] = arr2[count] - arr1[count];
		length += vector[count] * vector[count];
	}
	length = sqrt(length);

	cout << "unit vector =  ";
	for (int count = 0; count < 3; count++)
	{
		cout << "( " << vector[count] << " / " << length;

		if (count == 0)
			cout << " ) i ";
		if (count == 1)
			cout << " ) j ";
		if (count == 2)
			cout << " ) k ";
		if (count < 2)
			cout << " + ";
	}
}

//unit vector
// need 1 point "vector"

void unit_vector_1_point(double arr1[])
{
	double length = 0;

	for (int count = 0; count < 3; count++)
		length += arr1[count] * arr1[count];
	length = sqrt(length);

	cout << "unit vector =  ";
	for (int count = 0; count < 3; count++)
	{
		cout << "( " << arr1[count] << " / " << length;

		if (count == 0)
			cout << " ) i ";
		if (count == 1)
			cout << " ) j ";
		if (count == 2)
			cout << " ) k ";
		if (count < 2)
			cout << " + ";
	}
}
//dot product
// 2 points "vectors"
void dotproduct_2_points(double arr1[], double arr2[])
{
	double dot_product = 0.0;
	for (int count = 0; count < 3; count++)
		dot_product += arr1[count] * arr2[count];
	cout << "Dot product = " << dot_product << endl;
	if (dot_product == 0)
		cout << "The 2 vectors are perpendicular \n";

}
//dot product
// 2 length and angle
void dotproduct()
{
	double length_of_vector1 = 0.0, length_of_vector2 = 0.0, angle;

	cout << "enter the magnitude of vector1 : ";
	cin >> length_of_vector1;
	cout << "enter the magnitude of vector2 : ";
	cin >> length_of_vector2;
	cout << "enter the angle : ";
	cin >> angle;
	cout << "dot product = " << (length_of_vector1 * length_of_vector2 * (cos(angle * 3.14 / 180))) << endl;
}
//angle between 2 vectors or 2 planes+
//need 2 points "vectors"
void angle_between_2_vectors_or_2_plane(double arr1[], double arr2[])
{
	//dot product
	double dot_product = 0.0;
	for (int count = 0; count < 3; count++)
		dot_product += arr1[count] * arr2[count];
	//length of first vector
	double lengthormagnitude_of_vector1 = 0.0;

	for (int count = 0; count < 3; count++)
		lengthormagnitude_of_vector1 += arr1[count] * arr1[count];
	lengthormagnitude_of_vector1 = sqrt(lengthormagnitude_of_vector1);
	//length of second vector
	double lengthormagnitude_of_vector2 = 0.0;

	for (int count = 0; count < 3; count++)
		lengthormagnitude_of_vector2 += arr2[count] * arr2[count];
	lengthormagnitude_of_vector2 = sqrt(lengthormagnitude_of_vector2);

	cout << "cos angle = " << dot_product << " / " << lengthormagnitude_of_vector1 * lengthormagnitude_of_vector2 << endl;
	cout << "angle = " << acos(dot_product / (lengthormagnitude_of_vector1 * lengthormagnitude_of_vector2)) * 180 / 3.14159 << endl;
}

//cross product
// need 2 points
void cross_product_2_points(double arr1[], double arr2[])
{
	double cross_product[3] = { 0.0 };

	cross_product[0] = (arr1[1] * arr2[2] - arr1[2] * arr2[1]);
	cross_product[1] = (arr1[0] * arr2[2] - arr1[2] * arr2[0]);
	cross_product[2] = (arr1[0] * arr2[1] - arr1[1] * arr2[0]);
	cout << "cross product = (";
	for (int count = 0; count < 3; count++)
	{
		if (count == 1)
			cross_product[count] *= -1;
		cout << " ( " << cross_product[count];
		if (count == 0)
			cout << " ) i ";
		if (count == 1)
			cout << " ) j ";
		if (count == 2)
			cout << " ) k ) n ";
		if (count < 2)
			cout << " + ";
	}
	cout << endl;
	if (cross_product[0] == 0 && cross_product[1] == 0 && cross_product[2] == 0)
		cout << "The 2 vectors are parallel \n";
}
//line
//vector equation of line
// need point and vector
void vector_equation_of_line(double arr1[], double arr2[])
{
	cout << "Vector equation of the line : \n";
	cout << "( x, y,z ) = ";
	for (int count = 0; count < 3; count++)
	{
		cout << "( " << arr1[count] << " + " << arr2[count] << "t )";

		if (count == 0)
			cout << " i ";
		if (count == 1)
			cout << " j ";
		if (count == 2)
			cout << " k ";
		if (count < 2)
			cout << " + ";
	}
}
//vector equation of line
// need 2 points  
void vector_equ_of_line_2_points(double arr1[], double arr2[])
{
	double vector[3] = { 0.0 };
	cout << "Vector equation of the line : \n";

	for (int count = 0; count < 3; count++)
		vector[count] = arr2[count] - arr1[count];

	cout << "( x, y,z ) = ";
	for (int count = 0; count < 3; count++)
	{
		cout << "( " << arr1[count] << " + " << vector[count] << "t )";

		if (count == 0)
			cout << " i ";
		if (count == 1)
			cout << " j ";
		if (count == 2)
			cout << " k ";
		if (count < 2)
			cout << " + ";
	}
}
//parametric equation
//need point and vector
void parametric_equation(double arr1[], double arr2[])
{
	cout << "Parametric equation : " << endl;

	for (int count = 0; count < 3; count++)
	{
		if (count == 0)
			cout << "x = " << arr1[count] << " + " << arr2[count] << 't' << endl;

		else if (count == 1)
			cout << "y = " << arr1[count] << " + " << arr2[count] << 't' << endl;

		else if (count == 2)
			cout << "z = " << arr1[count] << " + " << arr2[count] << 't' << endl;
	}
}
//parametric equation
//need point and vector
void parametric_equ_2_points(double arr1[], double arr2[])
{
	double length[3];

	cout << "Parametric equation : " << endl;

	for (int count = 0; count < 3; count++)
	{
		length[count] = arr2[count] - arr1[count];
		if (count == 0)
			cout << "x = " << arr1[count] << " + " << length[count] << 't' << endl;

		else if (count == 1)
			cout << "y = " << arr1[count] << " + " << length[count] << 't' << endl;

		else if (count == 2)
			cout << "z = " << arr1[count] << " + " << length[count] << 't' << endl;
	}
}
//symmetric equation 
// need point and vector
void symmetric_equation(double arr1[], double arr2[])
{
	double x[3] = { 0.0 };
	int sum = -1;
	string str;

	cout << "Symmetric equation : " << endl;
	for (int count = 0; count < 3; count++)
	{
		if (arr2[count] == 0)
		{
			sum++;
			x[sum] = arr1[count];

			if (count == 0)
				str[sum] = 'x';
			else if (count == 1)
				str[sum] = 'y';
			else if (count == 2)
				str[sum] = 'z';

			continue;
		}
		else
		{
			if (count == 0)
				cout << "( x + " << arr1[count] * -1 << " ) / " << arr2[count];
			else if (count == 1)
				cout << "( y + " << arr1[count] * -1 << " ) / " << arr2[count];
			else if (count == 2)
				cout << "( z + " << arr1[count] * -1 << " ) / " << arr2[count];

			cout << " = ";
		}
	}
	cout << "\b\b  \n";
	if (sum > -1)
	{
		for (int count = 0; count <= sum; count++)
			cout << str[count] << " = " << x[count] << endl;
	}
	cout << endl;
}
//symmetric equation 
// need 2 points 
void symmetric_equ_2_points(double arr1[], double arr2[])
{
	double length[3], x[3] = { 0.0 };
	int sum = -1;
	string str;

	for (int count = 0; count < 3; count++)
		length[count] = arr2[count] - arr1[count];

	cout << "Symmetric equation : " << endl;
	for (int count = 0; count < 3; count++)
	{
		if (length[count] == 0)
		{
			sum++;
			x[sum] = arr1[count];

			if (count == 0)
				str[sum] = 'x';
			else if (count == 1)
				str[sum] = 'y';
			else if (count == 2)
				str[sum] = 'z';
			continue;
		}
		else
		{
			if (count == 0)
				cout << "( x + " << arr1[count] * -1 << " ) / " << length[count];
			else if (count == 1)
				cout << "( y + " << arr1[count] * -1 << " ) / " << length[count];
			else if (count == 2)
				cout << "( z + " << arr1[count] * -1 << " ) / " << length[count];

			cout << " = ";
		}
	}
	cout << "\b\b" << endl;
	if (sum > -1)
	{
		for (int count = 0; count <= sum; count++)
			cout << str[count] << " = " << x[count] << endl;
	}
	cout << endl;
}
///////// plane equations
  //vector equation
  // need point and vector
void vector_equation_of_plane(double arr1[], double arr2[])
{
	cout << "vector equation of plane : \n" << "( ";
	for (int count = 0; count < 3; count++)
		cout << arr2[count] << ",";
	cout << "\b ) . ( ";
	for (int count = 0; count < 3; count++)
	{
		if (count == 0)
			cout << "x - " << arr1[count] << " , ";
		else if (count == 1)
			cout << "y - " << arr1[count] << " , ";
		else if (count == 2)
			cout << "z - " << arr1[count] << " ) = 0 \n";
	}

}
//scalar equation of plane
// need point and vector
void scalar_equation_of_plane(double arr1[], double arr2[])
{
	cout << "scalar equation of the plane : \n";
	for (int count = 0; count < 3; count++)
	{
		cout << arr2[count] << " ( ";
		if (count == 0)
			cout << "x - ";
		else if (count == 1)
			cout << "y - ";
		else if (count == 2)
			cout << "z - ";
		cout << arr1[count] << " ) + ";
	}
	cout << "\b\b = 0 \n";
}
// general equation of plane
// need point and vector
void general_equation_of_plane(double arr1[], double arr2[])
{
	double sum = 0.0;
	for (int count = 0; count < 3; count++)
	{
		cout << arr2[count];
		if (count == 0)
			cout << "x + ";
		else if (count == 1)
			cout << "y + ";
		else if (count == 2)
			cout << "z + ";
		sum += arr2[count] * arr1[count] * -1;
	}
	cout << sum << " = 0 \n";
}
////////// circle and sphere 
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
	cout << "( x - " << a << " )^2 + ( y - " << b << " )^2 + ( z - " << c << " )^2 = " << pow(r, 2) << "\n";
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

//// check function
int check(string num[])
{
	string n;
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		n = num[i];
		if (n.size() == 1 && !(n[0]>=48 && n[0]<=57))
			return 1;

		for (int j = 0; j < n.size(); j++)
		{
			if (!((n[j] >= 48 && n[j] <= 58) || n[j] == 46))
			{
				return 1;
			}
			if (n[j] == 46)
			{
				count++;
			}
			if (count > 1)
			{
				return 1;
			}

		}
		count = 0;
	}
}

int check1(string num)
{
	int count = 0;
	if (num.size() == 1 && !(num[0] >=48 &&num[0] <=57))
		return 1;

	for (int j = 0; j < num.size(); j++)
	{
		if (!((num[j] >= 48 && num[j] <= 58) || num[j] == 46))
		{
			return 1;
		}
		if (num[j] == 46)
		{
			count++;
		}
		if (count > 1)
		{
			return 1;
		}

	}
	count = 0;

}

