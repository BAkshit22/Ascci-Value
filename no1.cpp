#include<iostream>
using namespace std;

main()
{
	char a;
	
	cout << "Enter Number : ";
	cin >> a;
	
	cout <<"ASCII = " <<(int) a;
	
	if(a>=48 && a<=57)
	{
		cout << "\n Number is Digit";
	}
	else if(a>=65 && a<=90)
	{
		cout << "\nNumber Is Capital Letter";
	}
	else if(a>=97 && a<=122)
	{
		cout << "\nNumber is small Letter";
	}
	else
	{
		cout << "\nNumber is special character";
	}
}
