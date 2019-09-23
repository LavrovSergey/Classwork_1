#include <iostream>
#include <conio.h>


using namespace std;

int main()
{

	double xBeg, xEnd, a, b, c, f, dx;
	cout << "Enter A \n";
	cin >> a;
	cout << "Enter B\n";
	cin >> b;
	cout << "Enter C\n";
	cin >> c;
	cout << "Enter xBeg\n";
	cin >> xBeg;
	cout << "Enter xEnd\n";
	cin >> xEnd;
	cout << "Enter dx\n";
	cin >> dx;
	int ac = (int)a;
	int bc = (int)b;
		int cc = (int)c;

	for (double i = xBeg; i < xEnd; i = i + dx)
	{

		if (i < 0 && b != 0)
		{
			f = a - (i / (10 + b));
		}
		
		else if (i > 0 && b == 0)
		{
			f = (i - a) / (i - c);
		}
		
		else f = 3 * i + (2 / c);
		if (((ac || bc) && cc) != 0)

		{
			cout << "|x= " << i << "|" << "F= " << f; "|\n";
			cout << "\n";
		}
		else cout << "|x= " << i << "|" << "F= " << int(f); "|\n";
		cout << "\n";


	}
	
	return 0;

}


