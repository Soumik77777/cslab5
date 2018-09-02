//First include the library
#include<iostream>
using namespace std;

//declare the main function
	int main()

	{

//declare variables

	double a,b,c,d;

/*the user will input three values of a traingle
programme will check if it is a valid triangle*/

	cout << "please input three angles :" << endl;
	cin >> a;
	cin >> b;
	cin >> c;

//summation

	d=a+b+c;

//conditions
	if ((a>0) && (b>0) && (c>0))
		{
		if(d!=180)
		cout << "The triangle is invalid as the angles do not add up to 180 degrees" << endl;
   
		else 
		cout<<"The triangle is valid"<<endl;

	return 0;
		} 
	else
 	cout << "The triangle is invalid as one or more than one of the angle(s) is not positive" << endl;

return 0;
	}

