#include <iostream>
using namespace std;

int main()
{
	int x1, x2, x3, y1, y2, y3;
	int s1, s2;
	cout << "Vvedite kooordinati A B C\n";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	s1 = sqrt(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)));
	s2 = sqrt(((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3)));
	if (s1 > s2)
	{
		cout << "Tochka C blizhe k A\nRasstoyanie ravno " << s2;
	}
	else
	{
		cout << "Tochka B blizhe k A\nRasstoyanie ravno " << s1;
	}
}