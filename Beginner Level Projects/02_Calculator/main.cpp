#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Addition(int x,int y);
int Subtraction(int x,int y);
int Multiplication(int x,int y);
int Division(int x,int y);
int Modulor(int x,int y);

int main() {
	int z,d; 
    int choice;
    bool repet = true;
    char t;
    
    while (repet){
    	
    cout << "¯_¯_¯_   ??  ???????????? ???????????????????? ???? ??  ??   _¯_¯_¯";
    	
	cout << "\n";
	cout << "=========================================================";
	cout << "\n";
	
	cout << "Type a number: x \n"; 
	cin >> z; 
	
	cout << "Type a number: y \n" ; 
	cin >> d;
	
	cout << "\n";
	cout << "=========================================================";
	cout << "\n";
	
	cout << "Type a number of operator \n" ;
	cout << "Choose an operator:\n";
	cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Modulo\n";
   
	cin >> choice;
	 if (choice > 5)
	 {
	 	cout << "plese enter 1-5 ";
	 	repet = false;
	 }else
	 {
	   switch(choice)
	{
		case 1 :
	        cout << "Your Addition Value is: " << Addition (z,d) ;
	        break;
	    case 2 :
	        cout << "Your Subtraction Value is: " << Subtraction (z,d) ;
	        break;
	    case 3 :
	        cout << "Your Multiplication Value is : " << Multiplication (z,d) ;
	        break;
	    case 4 :
	        cout << "Your Division Value is : " << Division (z,d) << " ";
	        break;
	    case 5 :
	        cout << "Your Modulor Value is: " << Modulor (z,d) ;
	        break;
	    default :
	    	cout << "Please enter correct number \n";
	}	
	 }
	
	cout << "\n";
	cout << "=========================================================";
	cout << "\n";
	cout << "Do you want to Repete press R \n"; 
	cin >> t; 
	
	if (t == 'r') {
            repet = true;
        } else {
            repet = false;
        }
    }

    return 0;
}

int Addition(int x,int y)
{
	int result = x+y;
	return result;
}

int Subtraction(int x,int y)
{
	int result = x-y;
	return result;
}


int Multiplication(int x,int y)
{
	int result = x*y;
	return result;
}
int Division(int x,int y)
{
	int result = x/y;
	return result;
}
int Modulor(int x,int y)
{
	int result = x%y;
	return result;
}


