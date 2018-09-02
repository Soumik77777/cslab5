//include library
#include<iostream>
using namespace std;

//check the maximum number betwwen three
	int main()

	{

//declaring variables
	double a,b,c;

/*the user will be asked to enter three values
programme will show the maximum number*/
	cout << "Please input three numbers :"<<endl;
	cin >> a;
	cin >> b;
	cin >> c;

//conditions
	if ((a>b) && (a>c))
	cout << "The greatest number is " << a <<endl;

	else if (b>c)
	cout << "The greatest number is " << b <<endl;

	else
	cout << "The greatest number is " << c <<endl;
 return 0;
}
