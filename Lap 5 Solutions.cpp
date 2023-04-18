/*
----------------------------------------------------------------------------------------------
*** Problem 1
*** sum of all the elements of a given array
a) using regular for loop
--------------------------------------------------------------------------------
*/
#include<iostream>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int Sum{};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int index =0; index <size ; ++index)
    {
        Sum += arr[index];
    }

    std::cout << "Sum elements of array = " << Sum << std::endl;
    return 0;
}
/*
----------------------------------------------------------------------------------------------
*** Problem 1
*** sum of all the elements of a given array
b) using range based for loop
--------------------------------------------------------------------------------
*/
#include<iostream>
int main()
{
    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
    int Sum{};
     
    for(auto element: arr)
    {
        Sum += element;
    }

    std::cout << "Sum elements of array = " << Sum << std::endl;
    return 0;
}
/*
----------------------------------------------------------------------------------------------
*** Problem 2
*** finding the   largest and   smallest element of an array***
--------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;

int main()
{

int arr[] = {11,2,3,34};
int small=arr[0];
int large =arr[0];
int size = sizeof(arr)/sizeof(arr[0]);
for(int i=1;i<size;i++)
    {
        if(arr[i]>large)
        {
            large = arr[i];
        }
    }
for(int i=1;i<size;i++)
    {
        if(arr[i]<small)
        {
            small = arr[i];
        }
    }
cout<<"smallest ="<<small<<endl;
cout<<"largeest ="<<large<<endl;
}

/*
Problem 3 -a) sum of all the values in array using static array
*/

#include<iostream>
 
int SumArray(int [], int);// function prototype 
 
int main()
{
int arr[] = { 1,2,3,4,5,6,7,8,9,10}; 
int size  = sizeof(arr)/sizeof(arr[0]); //gives the array size of arr
std::cout << "sum of all elements of array = " << SumArray(arr,size) << std::endl;
return 0;
}
 int SumArray(int arr[],int N)

{
int total = 0;
for (int index = 0; index < N; index++)
{
total +=  arr[index];
}
return total;
}
/*
Problem 3-b) sum of all the values in array using std::vector
*/
#include<iostream>
#include<vector>

int SumArray(std::vector<int> &arr)
{
 
int total = 0;
 
for (auto index : arr) //range based for loop
{
total = total + index;
}
return total;
}

int main()
{
std::vector<int> arr = { 1,2,3,4,5,6,7,8,9,10 };
std::cout << "sum of all telements of array = " << SumArray(arr) << std::endl;
return 0;
}
/*
----------------------------------------------------------------------------------------------
*** Problem 4
*** finding the   largest and   smallest element of an array***
--------------------------------------------------------------------------------
*/
#include<iostream>
using namespace std;
//function prototype
 void Smallest(int [], int);
 void Largest(int [], int );

int main()
{
    int arr[] = {8, 15, 59, 13,-20, 200,19, 32, 55, 80};
    int size = sizeof(arr)/sizeof(arr[0]);
    if (size < 1)
    {
        cout<<"Array size is less than 1 or Empty ";
        return 0;
    }
   //function call
    Largest(arr, size);
    Smallest(arr, size);
    return 0;
}
 //function definitions
void Largest(int arr[], int n)
{
   int largest = arr[0];
   for (int i = 1; i < n ; i ++)
   {
        if (arr[i]> largest)
        {
            largest =arr[i];
        }
   }
 
    cout << "Largest element  = " << largest<< endl;
}

void Smallest(int arr[], int n)
{
    int smallest=arr[0];
   
    for (int i = 1; i < n ; i ++)
    {
        if (arr[i] < smallest)
        {
           smallest = arr[i];  
        }
    }
    cout << "Smallest element = " << smallest << endl;
}