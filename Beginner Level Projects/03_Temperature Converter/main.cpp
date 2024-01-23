#include <iostream>
using namespace  std;

float Fahrenheit(int x);
float Celsius(int x);

int main() {
	int x,y;
	cout << "Temperature Converter To Fahrenheit and Celsius"<< endl;
	cout << "____________________________________________________________________________________________________\n"<< endl;
	cout << "What You like to convert :"<< endl;
	cout << "choose : "<< endl;
	cout << "	1.Converter To Fahrenheit and Celsius"<< endl;
	cout << "	2.Converter To Celsius and Fahrenheit"<< endl;
	cout << "____________________________________________________________________________________________________\n"<< endl;
	
	cin>> y ;
	
	cout << "____________________________________________________________________________________________________\n"<< endl;
//	cout << "Enter Your Value : "<< endl;
//	cin>> x ;
	
	if(y=1)
	{
	  cout << "1.Converter To Fahrenheit and Celsius"<< endl;
	  Fahrenheit(x);
	  cout << "Enter Your Value : "<< endl;
	  cin>> x ;	
	  cout << "____________________________________________________________________________________________________\n"<< endl;
	  cout << "Your converted Value :  \n"<< endl;
	  cout << Fahrenheit(x) << endl ;
	}
	else{
		cout << "2.Converter To Celsius and Fahrenheit"<< endl;
		cout << "Enter Your Value : "<< endl;
	    cin>> x ;
	    cout << "____________________________________________________________________________________________________\n"<< endl;
	    cout << "Your converted Value :  \n"<< endl;
		cout << Celsius(x)  << endl;	
	}
	return 0;
}

float Fahrenheit(int x)
{
   float f = (x*9/5)+32;
   return f;
}
float Celsius(int x)
{
 float c=(x-32)*5/9;
  return c;	
}
