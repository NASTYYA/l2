#include <iostream>

using namespace std;

class Rectangle
{
private:
	float a;
	float b;
public:

	float Ploshcha()
	{
		return a * b;
	}
	float Perumetr()
	{
		return 2 * a + 2 * b;
	}
};

int main()
{
	float a, b;
	Rectangle *oRectangle;
	float Ploshcha, Perumetr;
	cout<< "input a - ";
	cin>> a;

	while (a <= 0)
	{
		cout << "vvedite zanovo\n";
		cin>> a;
	}

	cout<< "\ninput b - ";
	cin>> b;
	while (b <= 0)
	{
		cout << "vvedite zanovo\n";
		cin >> b;
	}
	cout << "\n" << endl;



	cout<< "S=" << Ploshcha << endl;
	cout << "P=" << Perumetr << endl;
}
