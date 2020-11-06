#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int a = 0, in = 0, sum = 0;
	do
	{
		cout << "¬ведите член послндовательности(0 - конец последовательности): ";
		cin >> in;
		a = a * 10 + in;
	} while (in != 0);
	while (a != 0)
	{
		in = a % 10;
		if (in > 0 && in % 2 != 0)
			sum += in;
		a = a / 10;
	}
	cout << sum << endl;
	system("pause");
}