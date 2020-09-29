#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	int s;
	cout << "Vvedite znacheniya\n";
	cin >> a >> b >> c;
	if ((a > b && b > c)||(b > a && a > c))
	{
		s = a + b;
	}
	if ((c > b && b> a)||(b > c&&c > a))
	{
		s = c + b;
	}
	if ((a > c&& c > b) || (c > a && a > b))
	{
		s = a + c;
	}
	cout << s;
}