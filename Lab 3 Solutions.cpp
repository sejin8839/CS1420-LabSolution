/*
1)  C++ Program to Calculate BMI and BMI Category
*/
#include<iostream>
#include<iomanip>
int main()
{
    float weight, height, BMI;
    //Weight should be in Kilograms
    //Height should be in Meters
    std::cout<<"Enter the weight of person: ";
    std::cin>>weight;
    std::cout<<"Enter the height of person: ";
    std::cin>>height;
         

 if (weight <=0  || height<=0)
    {
        std::cout<<"Height and weight must be greter than 0";
        return 0;
    }
    BMI = weight/(height*height);
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"The BMI of person is:"<<BMI<<std::endl;
    if (BMI<=18.5)
       std::cout<<"BMI Category is underweight";
    else if (BMI>18.5 && BMI<=24.9)
       std::cout<<"BMI Category is Normal";
    else if (BMI>17.6 && BMI<=18.5)
       std::cout<<"BMI Category is Underweight";
    else if (BMI>24.9 && BMI<=29.9)
       std::cout<<"BMI Category is overweight";
    else if (BMI>29.9 && BMI<=34.9)
       std::cout<<"BMI Category is Obesity class I";
    else if (BMI>34.9 && BMI<=39.9)
       std::cout<<"BMI Category is Obesity class II";
    else
       std::cout<<"BMI Category is Obesity class III";
}
/*
2-1) Find power of any number using for loop
x= a^b ===> a is base; b is exponent
*/
#include <iostream>
using namespace std;
int main()
{
    int base, exp;
    long long power=1;
    cout << " Find power of any number using for loop"<<endl;
    cout << "===============================================\n";
    cout << " Input the base: ";
    cin >> base;
    cout << " Input the exponent: ";
    cin>>exp;
   
   for (int i = 1; i <=exp; i++)
    {
       power=power*base;
    }
    cout <<base<<" ^ "<<exp<<" = "<<power<<endl ;
    cout << "===============================================\n";
 
}
/*
2-2)Find power of any number using while loop
x= a^b ===> a is base; b is exponent
*/
#include <iostream>
using namespace std;
int main()
{
    int base, exp;
    long long power=1;
    cout << " Find power of any number using while loop"<<endl;
    cout << "===============================================\n";
    cout << " Input the base: ";
    cin >> base;
    cout << " Input the exponent: ";
    cin>>exp;
   
    int i =1;
    while(i<=exp)
    {
       power=power*base;
       i++;
    }
    cout <<base<<" ^ "<<exp<<" = "<<power<<endl ;
    cout << "===============================================\n";
 
}