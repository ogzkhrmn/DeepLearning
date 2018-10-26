#include "Inputs.h"

int main()
{
	int i;
	cout << "Program Started" << endl;
	cout << "1 - Train\n2 - Find Letter" << endl;
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
