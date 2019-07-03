#include<iostream>
#include<math.h>
using namespace std;
int main()
{
         int  Cel;
		 cout << "Enter Celsius temperature: ";
		 cin >> Cel;
		 cout << "Fahrenheit  = "<< 1.8*Cel <<endl;
		 cout << "Now weather in Thailand is "<< (( 1.8*Cel > 70) ?"Hot":"Cool")<<endl;

}