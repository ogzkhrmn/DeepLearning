#include "Inputs.h"

int main()
{
	int i;
	cout << "program basladi" << endl;
	cin >> i;
	Calculator calculator;
	if (i == 1)
	{
		calculator.train();
	}
	else
	{
		calculator.findLetter();
	}

	return 0;
}
