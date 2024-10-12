//Haya Irfan
//A2W6817
//change.cpp
#include <iostream>
using namespace std;


void compute_coins(int amount)
{
	//precondition: 0 < amount < 100
	//postcondition: The function prints out the num of quarter, dimes, and pennies to make amount value
	int quarters(0), dimes(0), pennies(0);
	int initial = amount;
	
	if(amount >= 25)
	{
		quarters = amount/25;
		amount %= 25;
	}
	if(amount >= 10)
	{	
		dimes = amount/10;
		amount %= 10;
	
	}
	if(amount >= 1)
	{
		pennies = amount/1;
		amount %= 1;
	}
	

	cout << initial << " cents can be given in ";
	if(quarters > 1)
	{
		cout << quarters << " quarters";
		if(dimes > 0 || pennies > 0)
		{
			cout << ", ";
		}
	}
	else if(quarters == 1)
	{
		cout << quarters << " quarter";
		if(dimes > 0 || pennies > 0)
		{
			cout << ", ";
		}
	}
	else
	{
		cout <<"";
	}

	if(dimes > 1)
	{
		cout << dimes << " dimes";
		if(pennies > 0)
		{
			cout << ", ";
		}
	}
	else if(dimes == 1)
	{
		cout << dimes << " dime";
		if(pennies > 0){
			cout << ", ";
		}
	}
	else
	{
		cout << "";
	}
	
	if(pennies > 1)
	{
		cout << pennies << " pennies";
	}
	else if(pennies == 1)
	{
		cout << pennies << " penny";
	}
	else
	{
		cout << "";
	}
	cout << "." << endl;
}

int main()
{
	int amount;
	while(true)
	{
		cout << "Enter number of cents (or zero to quit): " << endl;
		cin >> amount;

		if(0<amount && amount<100)
		{
	 		compute_coins(amount);
		}
		else if(amount == 0)
		{
			break;
		}		
		else
		{
			cout << "Amount is out of bounds. Must be between 1 and 99. " << endl;
		}

	}
}
