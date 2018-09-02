//include library
#include<iostream>
using namespace std;

//declare the main function
int main()

	{

//declare variables
	int i,n;

/*user is asked a natural number
all the natural numbers from 1 to n are printed*/

	cout<<"please input a natural number"<<endl;
	cin>>n;

	cout<<"The natural numbers from 1 to "<<n<<" are"<<endl;

	while(i<=n)
//looping
		{ 
		cout<<i<<endl;
		i++;
		}
return 0;
	}
