/*
Question 1: Rectangle Area
*/
#include <iostream>
#include <string>
using namespace std;

double inputValidate(double num);
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    double length, width,area;

    length = getLength(length);
    width  = getWidth(width);
    area   = getArea(length, width);
    displayData(length, width, area);

    return 0;
}
/*
This function should ask the user to enter the rectangle’s length and then return that value as a double
*/
double getLength(double length)
{
    cout << "Enter rectangle's length: ";
    length = inputValidate(length);
    return length;
}
/*
This function should ask the user to enter the rectangle’s width and then return that value as a double.
*/
double getWidth(double width)
{
    cout << "Enter rectangle's width: ";
    width= inputValidate(width);
    return width;
}
/*
This function should accept the rectangle’s length and width as arguments and return the rectangle’s area. The area is calculated by multiplying the length by the width
*/
double getArea(double length, double width)
{
    return length * width;
}
/*
This function should accept the rectangle’s length, width, and area as arguments and display them in an appropriate message on the screen.
*/
void displayData(double l, double w, double a)
{
    cout << "Length = " << l << endl;
    cout << "Width  = " << w << endl;
    cout << "Area   = " << a << endl;
}
/*
the length and width of a rectangle must be greater than zero
*/
double inputValidate(double num)
{
    cin>>num;
    while((num<=0))
    {
        cout << "Error. An integer above 0 must be entered: "<<endl;
        cout << "Try again: ";
        cin>>num;
    }
    return num;
}
/*
Question 2: the GCD  of  two nubers using Iteration function

See The Euclidean Algorithm: GCD

*/

#include<iostream>
using namespace std;
int gcd_iteration(int,int);
int main() {
int n1,n2,gcd;
 cout<<"Input two integer numbers: ";
cin>>n1>>n2;
gcd =gcd_iteration(n1,n2);
cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd;
return 0;
}

int  gcd_iteration(int n,int m)
{
   int gcd;
for(int i=1;i<=n&&i<=m;i++){
   
     if
        (n%i==0 && m%i == 0 ){

        gcd=i;
        }
   }
return gcd;
}
Question 2: the GCD  of  two numbers using recursive function (Links to an external site.)

*/

#include<iostream>
using namespace std;
int gcd_recursive (int n, int m) {
   if (m == 0)
   return n;
   return gcd_recursive (m, n % m);
}
 
int main()
{
    int n1,n2,gcd;
    cout<<"Input two integer numbers: ";
    cin>>n1>>n2;
    gcd=gcd_recursive (n1,n2);
    cout<<"The GCD of "<<n1<<" and "<<n2<<" is "<<gcd;
  return 0;
}