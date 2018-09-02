//include library
#include<iostream>
using namespace std;

//declare the main function
int main()

	{

//declare variables
	int i,n;

/*user is asked a natural number
all the natural numbers from n to 1 are printed in reverse*/

	cout<<"please input a natural number"<<endl;
	cin>>n;
	
	i=n;

	cout<<"The natural numbers from 1 to "<<n<<" in reverse are"<<endl;

	while(i>=1)
//looping
		{ 
		cout<<i<<endl;
		i--;
		}
return 0;
	}
