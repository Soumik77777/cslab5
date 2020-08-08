//Soumik Bhattacharyya, Roll No.-1811155

//Q1. Add 1+2+3+... without using the formula n(n+1)/2

//including library
#include<iostream>
using namespace std;

//declaring the main function
int main()

	{

//declare variables
	int n, sum=0;

	cout << "Please enter a positive integer"<< endl;
	cin>>n;

    int i=1;
    
//trapping negative entries
    if (n<0)
    {
    cout << "You've entered a negative number. Please insert a valid input." << endl;
    
    return 0;
    }
    
    
    else
    
//program to sum over 1 to n

    	while(i<=n)
		{
			sum=sum+i;
			i++;
		}
		cout<<"The summation equals to "<<sum<<endl;

return 0;
	}
