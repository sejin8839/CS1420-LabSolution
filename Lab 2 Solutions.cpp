// Question 1 : Arithmetic operations
#include <iostream>
int main ()
{
    float a{2}; //Variable declaration & initialization
    float b {3};  
    float c {4};  
    float x = a + b + c;
    std::cout<<"sum ="<<x<<std::endl; //prints the sum of a, b and c
     
    std::cout << "b/a = "<< b/a << std::endl;
    std::cout << "b/c = "<< b/c << std::endl;
    return 0;
}

// Output:
// sum =9
// b/a = 1.5
// b/c = 0.75
// */
// changing the type from float to int
// */



// LAB 2: Arithmetic operations
#include <iostream>
int main ()
{
    int a = 2; //Variable declaration & initialization
    int b = 3;  
    int c = 4;  
    int x = a + b + c;
    std::cout<<"sum ="<<x<<std::endl; //prints the sum of a, b and c
     
    std::cout << "b/a = "<< b/a << std::endl;
    std::cout << "b/c = "<< b/c << std::endl;
    return 0;
}
/*
Output:
sum =9
b/a = 1
b/c = 0
*/
/*
Question 2:  Calculate Restaurant Bill
*/
#include<iostream>
#include<iomanip> // required to use output formating methods like  setw(), setprecision(),etc...
using namespace std;
int main()
{
  double  mealCharge{88.67};
  double tax = mealCharge*6.75/100;
  double tip = (mealCharge + tax)* 20/100;
  double total =mealCharge + tax +tip;

 
  cout<<"=========================================="<<endl;
  cout<<setprecision(2)<<fixed;
  cout<<"Meal Charge"<<setw(15)<<"$"<<mealCharge<<endl;
  cout<<"Tax"<<setw(24)<<"$"<<tax<<endl;
  cout<<"Tip"<<setw(23)<<"$"<<tip<<endl;
  cout<<"__________________________________________"<<endl;
  cout<<"Total Bill"<<setw(15)<<"$"<<total<<endl;
  cout<<"=========================================="<<endl;
}
/*
Sample OUTPUT
==========================================
Meal Charge          $88.67
Tax                   $5.99
Tip                  $18.93
__________________________________________
Total Bill          $113.59
==========================================
*/