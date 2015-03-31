
/*
    Retrieved from: http://www.lifengadget.com/lifengadget/program-to-check-whether-a-number-is-prime-or-not-in-cplusplus/
    primenumber.cpp
    Program to check whether the number is prime or not in C++
    To compile (Need g++ compiler for unix/linux or Microsoft compiler for windows)
    g++ primenumber.cpp -o  prime
    To exectue.
    ./prime

    For windows
    c:\directory> cl -GX primenumber.cpp
*/
#include <iostream>
//#include <config.h>

using namespace std;

int main()
 {

     int num = 0;
	 int count = 0;
	 
     while (num != -1)
     {
     
     cout<<"\nEnter -1 to exit the program\n";
	 cout<<"Enter the number to check : ";
     cin>>num;

     for(int i=2;i<num;i++)

         {
            if(num%i==0)       // checks if the number is fully divisible or not
             {
               count++;
             }
         }
            if(count==0)
             {
               cout<<"\nIt is a Prime Number \n";
             }
            else
             {
              cout<<"\nIt is not a Prime Number \n";
             }
	}

 }
