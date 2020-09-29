#include <iostream>
using namespace std;

int main()
{
	int a;
	cout << "Vvedite chislo\n";
	cin >> a;
	if (a > 0)
	{
		cout << "Polozhitelnoe";
		if (a % 2 == 0)
		{
			cout << " chetnoe chiclo";
		}
		else
		{
			cout << " nehetnoe chislo";
		}
	}
	if (a == 0)
	{
		cout << "Nulevoe chislo";
	}
	if (a < 0)
	{
		cout << "Otricatelnoe";
		if (a % 2 == 0)
		{
			cout << " chetnoe chiclo";
		}
		else
		{
			cout << " nehetnoe chislo";
		}
	}
}