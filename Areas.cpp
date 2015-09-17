/*
*  Alex Mack
*  Area Calculations
*  6/29/2012 @ 8:03 PM
*/



#include <iostream>
#include <iomanip>
using namespace std;

int main() 
{      
              
   const float PI = 3.14;
   float radius;
   float circle;
   float sphere;
   float triangle;
   float height;
   float base;
   int option;

   do
   {
        cout << "\nArea Calculations\n";
        cout << "---------------------\n";
        cout << "1) Area of a circle\n";
        cout << "2) Area of a sphere\n";
        cout << "3) Area of a triangle\n";
        cout << "4) Quit\n";
        cout << "Choose an option: ";
        cin >> option;

        while(option < 1 || option > 4)
        {
              cout<< "Invalid option, please enter 1, 2, 3, or 4: ";
              cin >> option;
        }
        
        switch(option)
        {
            case 1:  cout<< "Enter the radius: ";
                     cin >> radius;
                     circle = PI * (radius * radius);
                     cout << fixed << showpoint << setprecision(2);
                     cout << "The area of the circle is "<< circle << "\n";
                     break;
            case 2:  cout << "Enter the radius: ";
                     cin >> radius;
                     sphere = 4.0 * PI * (radius * radius);
                     cout << fixed << showpoint << setprecision(2);
                     cout << "The area of the sphere is " << sphere << "\n";
                     break;
            case 3:  cout << "Enter the base: ";
                     cin >> base;
                     cout << "Enter the height: ";
                     cin >> height;
                     triangle = 0.5 * base * height;
                     cout << fixed << showpoint << setprecision(2);
                     cout << "The area of the triangle is " << triangle << "\n";
                     
        }
  }while(option != 4);
   return 0;
}