#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Vvedite a, b\n";
	cin >> a >> b;
	if (a != b)
	{
		if (a > b) 
		{
			b = a;
		}
		else
		{
			a = b;
		}
	}
	else
	{
		a = 0;
		b = 0;
	}
	cout << a << "\n"<< b;
}