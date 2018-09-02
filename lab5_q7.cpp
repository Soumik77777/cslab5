//first include the library
#include<iostream>
using namespace std;

//checking an alphabet
int main()

	{

//declare variables
	char a;

/*the user is asked to enter a character
programme has to check wheather it is an alphabet or not*/

	cout<<"Please input the character you want"<<endl;
	cin>>a;

//conditions
	
	if((a>='a'&& a<='z')||(a>='A'&& a<='Z')) 
 	cout<<"The given character is an alphabet"<<endl;
 
	else
	cout<<"The given character is not an alphabet"<<endl;

return 0;

	}

