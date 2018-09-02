//include library
#include<iostream>
using namespace std;

//declare the main function
int main()

	{

//declare variables
	int n,sum=0;

	cout << "Please input a natural number"<< endl;
	cin>>n;
	int i=1;

//program to print the sum of all odd numbers from 1 to 100 using while loop

//looping

	while(i<=n)
		{
//condition for odd number
			if (i%2!=0)
			sum=sum+i;
			i++;
		}
		cout<<"The summation of odd numbers from 1 to n are "<<sum<<endl;

return 0;
	}
