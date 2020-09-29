#include <iostream>
using namespace std;

int main()
{
	int a, n;
	n = 0;
	cout << "Vvedite chislo\n";
	cin >> a;
	if (a % 2 == 0)
	{
		cout << "chetnoe ";
	}
	else
	{
		cout << "nechetnoe ";
	}
	while (a > 0)
	{
		a /= 10;
		n++;
	}
	switch (n)
	{
	case 1:
		cout << "odnoznachnoe chislo";
		break;
	case 2:
		cout << "dvuznachnoe chiclo";
		break;
	case 3:
		cout << "trehznachnoe chislo";
		break;
	}
}