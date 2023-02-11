#include<iostream>
using namespace std;

#include<iostream>
using namespace std;


int main()
{

	float a, b;
	char c;
	cout << "Enter the first number: ";
	cin >> a;

	if (a)
	{
		
	}
	else 
	{ 
		cout << "It's not a nomber!!!" << endl;
		return 0;
	}
	
	cout << endl;
	cout << "Enter the second number: ";
	cin >> b;
	
	if (b)
	{

	}
	else
	{
		cout << "It's not a nomber!!!" << endl;
		return 0;
	}

	cout << endl;
	cout << "Choose one (+,-,*,/): ";
	cin >> c;
	cout << endl;

	switch (c)
	{
		case '+':
			cout << "The sum of two numbers is equal to: " << a + b << endl;
			break;
		case '-':
			cout << "The difference of two numbers is equal to: " << a - b << endl;
			break;
		case '*':
			cout << "Multiplication of two numbers is equal to: " << a * b << endl;
			break;
		case '/':
			cout << "The division of two numbers is equal to: " << a / b << endl;
			break;
		default: 
			cout << "!!!ERROR!!!" << endl;

	}

	
}