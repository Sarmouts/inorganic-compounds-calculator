#include <iostream>
#include <string>
using namespace std;


string replaceOne(string str)
{
	string final = "";
	for (int i = 0; i <= str.length(); i++)
	{
		if (str[i] != '1')
		{
			final += str[i];
		}
	}
	return final;
}
string parenthesis(string str, int v)
{
	string final = "(" + str + ")";
	if (str == "OH" && v != 1)
	{
		return final;
	}
	else if (str.length() != 3 || v == 1)
	{
		return str;
	}
	return final;
}
int main()
{
	cout << "Welcome to MathFlare's early access inorganic compounds calculator" << endl;
	cout << "------------------------------------------------------------------" << endl;
	while (true)
	{
		string x, y, result;
		int z, v;
		cout << "X^+z + Y^-v" << endl;
		cout << "Enter element X (metal)" << endl;
		cin >> x;
		cout << "Enter number z" << endl;
		cin >> z;
		cout << "Enter element Y (non-metal)" << endl;
		cin >> y;
		cout << "Enter number v" << endl;
		cin >> v;
		if (z <= 0 || v <= 0)
		{
			cout << "Please enter a valid value" << endl;
			cout << "=================================================" << endl;
		}
		else if (z > 3 || v > 3)
		{
			cout << "The value of z or v cannot be more than 3" << endl;
			cout << "=================================================" << endl;
		}
		else if (x == "H")
		{
			if (z != 1)
			{
				cout << "The value of z must be 1 since the metal is H" << endl;
				cout << "=================================================" << endl;
			}
			else if (z == v)
			{
				cout << x + y << ": acid" << endl;
				cout << "=================================================" << endl;
			}
			else if (y == "OH" && v == 1) {
				result = "H2O";
				cout << replaceOne(result) << ": water" << endl;
				cout << "=================================================" << endl;
			}
			else if (y == "O" && v == 2) {
				result = x + to_string(v) + parenthesis(y, z) + to_string(z);
				cout << replaceOne(result) << ": water" << endl;
				cout << "=================================================" << endl;
			}
			else {
				result = x + to_string(v) + parenthesis(y, z) + to_string(z);
				cout << replaceOne(result) << ": acid" << endl;
				cout << "=================================================" << endl;
			}
		}
		else if (y == "O")
		{
			if (v != 2)
			{
				cout << "The value of v must be 2 since the non-metal is O" << endl;
				cout << "=================================================" << endl;
			}
			else if (z == v)
			{
				cout << x + y << ": oxide " << endl;
				cout << "=================================================" << endl;
			}
			else {
				result = x + to_string(v) + parenthesis(y, z) + to_string(z);
				cout << replaceOne(result) << ": oxide " << endl;
				cout << "=================================================" << endl;
			}
		}
		else if (y == "OH")
		{
			if (v != 1)
			{
				cout << "The value of v must be 1 since the non-metal is OH" << endl;
				cout << "=================================================" << endl;
			}
			else if (z == v)
			{
				cout << x + y << ": base" << endl;
				cout << "=================================================" << endl;
			}
			else {
				result = x + to_string(v) + parenthesis(y, z) + to_string(z);
				cout << replaceOne(result) << ": base" << endl;
				cout << "=================================================" << endl;
			}
		}
		else
		{
			if (z == v)
			{
				cout << x + y << ": salt" << endl;
				cout << "=================================================" << endl;
			}
			else {
				result = x + to_string(v) + parenthesis(y, z) + to_string(z);
				cout << replaceOne(result) << ": salt" << endl;
				cout << "=================================================" << endl;
			}
		}
	}
}

