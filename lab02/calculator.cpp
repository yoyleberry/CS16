//Haya Irfan
//A2W6817
//calculator.cpp
#include <iostream>
#include <cstdlib>
using namespace std;

void add(int a, int b)
{
	cout << a + b;
}

void substract(int a, int b)
{
	cout << a - b;
}

void multiply(int a, int b)
{
	cout << a*b;
}

void mod(int a, int b)
{
	cout << a%b;
}

//argc and argv to take arguments from the cmd line
int main(int argc, char *argv[])
{
	
	//Part 1: Checks to see if correct num of args	
	if(argc != 4)
	{
		cerr << "Number of arguments is incorrect";
		exit(1);
	}

	//Part 2: convert args to ints and chars, accordingly
	int num1 = atoi(argv[1]);
	char mathOp = *argv[2];
	int num2 = atoi(argv[3]);

	//Part 3: check for illegal operations
	if(mathOp != '+' || mathOp != '-' || mathOp != 'x' || mathOp != '%')
	{
		cerr << "Bad operation choice.";
		cout << mathOp;
		exit(1);
	}
	if(mathOp == '%' && num2 == 0)
	{
		cerr << "Cannot divide by zero.";
		exit(1);
	}

	//Part 4: Do the calculations
	switch(mathOp)
	{
		case '+':
			add(num1, num2);
			break;
		case '-':
			substract(num1, num2);
			break;
		case 'x':
			multiply(num1, num2);
			break;
		case '%':
			mod(num1, num2);
			break;
		default:
			cout<<"";
			break;
	}	

	return 0;
}
