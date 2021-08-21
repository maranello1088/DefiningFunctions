// DefiningFunctions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

const double pi{ 3.14159 };

double calc_area_circle(double radius) {
    return pi * (radius * radius);
}

double calc_volume_cylinder(double radius, double height) {
    //return pi * (radius * radius) * height; //return pi * (radius * radius) was already used in double_calc_area
    return calc_area_circle(radius)* height; //This refactors the code and reduces redundancy
}

void area_circle() {
    double radius{ 0 };
    cout << endl << "Enter the radius of the circle in cm: ";
    cin >> radius;

    cout << "The area of a circle with radius " << radius << "cm is " << calc_area_circle(radius) << "cm" << endl;
    }

void volume_cylinder() {
    double radius{ 0 };
    double height{ 0 };
    cout << endl << "Enter the radius of the cylinder in cm: ";
    cin >> radius;
    cout << endl << "Enter the height of the cylinder in cm: ";
    cin >> height;

    cout << "The volume of a cylinder with radius " << radius << "cm and height " << height << "cm is " << calc_volume_cylinder(radius, height) << "cm" << endl;
}

int main()
{
    area_circle();
    volume_cylinder();

    return 0;
}
