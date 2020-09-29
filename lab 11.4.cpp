#include <iostream>
using namespace std;

int main()
{
	int x, y;
	cout << "Vvedite koordinatu tochki\n";
	cin >> x >> y;
	if (x > 0 && y > 0)
	{
		cout << "1-ya chetvert'";
	}
	if (x > 0 && y < 0)
	{
		cout << "2-ya chetvert'";
	}
	if (x < 0 && y < 0)
	{
		cout << "3-ya chetvert'";
	}
	if (x < 0 && y > 0)
	{
		cout << "4-ya chetvert'";
	}
}