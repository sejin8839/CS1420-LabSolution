#include <iostream>
using namespace std;

int main(){
   //n is the number of elements in the array
   int n, largest, smallest;
   int num[10];
   cout<<"Enter number of elements you want to enter: ";
   cin>>n;
   
   /* Loop runs from o to n, in such a way that first
    * element entered by user is stored in num[0], second 
    * in num[1] and so on. 
    */
   for(int i = 0; i < n; i++) {
      cout<<"Enter Element "<<(i+1)<< ": ";
      cin>>num[i];
   }
   // Storing first array element in "largest" variable
   largest = num[0];
   for(int i = 1;i < n; i++) {
      
      if(largest < num[i])
         largest = num[i];
   } 

    // Storing first array element in "largest" variable
   smallest = num[0];
   for(int i = 1;i < n; i++) {
      
      if(smallest > num[i])
         smallest = num[i];
   } 


   cout<<"Largest element in array is: "<<largest;
   cout<<"Smallest element in array is: "<<smallest;
   return 0;
}