#include<iostream>
using namespace std;

int main()
{
    cout << "Project : simple calculator that takes two numbers and outputs the sum difference product and quotient of the numbers\n";
    cout<< "Author : Clinton Joel Kamau\n";
    cout<< "Compiler : C89\n";
    cout<<"Licence: MIT\n";
    cout<<"Date: July 2022\n";
int num1,num2; 
int add,subs,mul,div,mod;
cout<<"\nEnter First Number :"; 
cin>>num1; cout<<"\nEnter Second Number :"; 
cin>>num2; 
// (+) operator 
add = num1 + num2; 
cout<<"\nAddition is : "<<add;

// (-) operator 
subs = num1 - num2; 
cout<<"\nSubtraction is : "<<subs;

// (*) operator 
mul = num1 * num2; 
cout<<"\nMultiplication is : "<<mul; 

// (÷) operator 
div = num1 / num2; 
cout<<"\nDivision is : "<<div;

// (%) operator 
mod = num2 % num1; 
cout<<"\nModulus is : "<<mod; 

printf("\nYou can also enter a number to find it's cube root\n");
int no; 
cout<< "Enter your number.\n"; 
//single line comment 
//input a number using >>
 cout<<"Enter a number: "; 
cin>> no;
//now, output a number using << 
cout<< no << " Your cube is " << no*no*no <<"\n";

 return 0;
}

    