#include "Inputs.h"

Calculator::Calculator() :
	modelA1{
		{-1, -1, 1, 1, -1, -1, -1}, {-1, -1, -1, 1, -1, -1, -1}, {-1, -1, -1, 1, -1, -1, -1},
		{-1, -1, 1, -1, 1, -1, -1}, {-1, -1, 1, -1, 1, -1, -1}, {-1, 1, 1, 1, 1, 1, -1}, {-1, 1, -1, -1, -1, 1, -1},
		{-1, 1, -1, -1, -1, 1, -1}, {1, 1, 1, -1, 1, 1, 1}
	},
	modelB1{
		{1, 1, 1, 1, 1, 1, -1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1},
		{-1, 1, 1, 1, 1, 1, -1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1},
		{1, 1, 1, 1, 1, 1, -1}
	},
	modelC1{
		{-1, -1, 1, 1, 1, 1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1},
		{1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1},
		{-1, 1, -1, -1, -1, -1, 1}, {-1, -1, 1, 1, 1, 1, -1}
	},
	modelD1{
		{1, 1, 1, 1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1},
		{-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, 1, -1},
		{1, 1, 1, 1, 1, -1, -1}
	},
	modelE1{
		{1, 1, 1, 1, 1, 1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, -1}, {-1, 1, -1, 1, -1, -1, -1},
		{-1, 1, 1, 1, -1, -1, -1}, {-1, 1, -1, 1, -1, -1, -1}, {-1, 1, -1, -1, -1, -1, -1},
		{-1, 1, -1, -1, -1, -1, 1}, {1, 1, 1, 1, 1, 1, 1}
	},
	modelJ1{
		{-1, -1, -1, 1, 1, 1, 1}, {-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1},
		{-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1},
		{-1, 1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, -1, 1, 1, 1, -1, -1}
	},
	modelK1{
		{1, 1, 1, -1, -1, 1, 1}, {-1, 1, -1, -1, 1, -1, -1}, {-1, 1, -1, 1, -1, -1, -1}, {-1, 1, 1, -1, -1, -1, -1},
		{-1, 1, 1, -1, -1, -1, -1}, {-1, 1, -1, 1, -1, -1, -1}, {-1, 1, -1, -1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1},
		{1, 1, 1, -1, -1, 1, 1}
	},
	modelA2{
		{-1, -1, -1, 1, -1, -1, -1}, {-1, -1, -1, 1, -1, -1, -1}, {-1, -1, -1, 1, -1, -1, -1},
		{-1, -1, 1, -1, 1, -1, -1}, {-1, -1, 1, -1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, 1, 1, 1, 1, 1, -1},
		{-1, 1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, -1, 1, -1}
	},
	modelB2{
		{1, 1, 1, 1, 1, 1, -1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1},
		{1, 1, 1, 1, 1, 1, -1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1},
		{1, 1, 1, 1, 1, 1, -1}
	},
	modelC2{
		{-1, -1, 1, 1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, -1},
		{1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, 1},
		{-1, 1, -1, -1, -1, 1, -1}, {-1, -1, 1, 1, 1, -1, -1}
	},
	modelD2{
		{1, 1, 1, 1, 1, -1, -1}, {1, -1, -1, -1, -1, 1, -1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1},
		{1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, 1, -1},
		{1, 1, 1, 1, 1, -1, -1}
	},
	modelE2{
		{1, 1, 1, 1, 1, 1, 1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1},
		{1, 1, 1, 1, 1, -1, -1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1},
		{-1, 1, -1, -1, -1, -1, 1}, {1, 1, 1, 1, 1, 1, 1}
	},
	modelJ2{
		{-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1},
		{-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1},
		{-1, 1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, -1, 1, 1, 1, -1, -1}
	},
	modelK2{
		{1, -1, -1, -1, -1, 1, -1}, {1, -1, -1, -1, 1, -1, -1}, {1, -1, -1, 1, -1, -1, -1}, {1, -1, 1, -1, -1, -1, -1},
		{1, 1, -1, -1, -1, -1, -1}, {1, -1, 1, -1, -1, -1, -1}, {1, -1, -1, 1, -1, -1, -1}, {1, -1, -1, -1, 1, -1, -1},
		{1, -1, -1, -1, -1, 1, -1}
	}, modelA3{
		{-1, -1, -1, 1, -1, -1, -1}, {-1, -1, -1, 1, -1, -1, -1}, {-1, -1, 1, -1, 1, -1, -1},
		{-1, -1, 1, -1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, 1, 1, 1, 1, 1, -1}, {1, -1, -1, -1, -1, -1, 1},
		{1, -1, -1, -1, -1, -1, 1}, {1, 1, -1, -1, -1, 1, 1}
	},
	modelB3{
		{1, 1, 1, 1, 1, 1, -1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, 1, 1, 1, 1, -1},
		{-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1},
		{1, 1, 1, 1, 1, 1, -1}
	},
	modelC3{
		{-1, -1, 1, 1, 1, -1, 1}, {-1, 1, -1, -1, -1, 1, 1}, {1, -1, -1, -1, -1, -1, 1}, {1, -1, -1, -1, -1, -1, -1},
		{1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, -1}, {1, -1, -1, -1, -1, -1, 1},
		{-1, 1, -1, -1, -1, 1, -1}, {-1, -1, 1, 1, 1, -1, -1}
	},
	modelD3{
		{1, 1, 1, 1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1},
		{-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, -1, 1, -1},
		{1, 1, 1, 1, 1, -1, -1}
	},
	modelE3{
		{1, 1, 1, 1, 1, 1, 1}, {-1, 1, -1, -1, -1, -1, 1}, {-1, 1, -1, -1, 1, -1, -1}, {-1, 1, 1, 1, 1, -1, -1},
		{-1, 1, -1, -1, 1, -1, -1}, {-1, 1, -1, -1, -1, -1, -1}, {-1, 1, -1, -1, -1, -1, -1},
		{-1, 1, -1, -1, -1, -1, 1}, {1, 1, 1, 1, 1, 1, 1}
	},
	modelJ3{
		{-1, -1, -1, -1, 1, 1, 1}, {-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1},
		{-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1}, {-1, -1, -1, -1, -1, 1, -1},
		{-1, -1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, -1, 1, 1, 1, -1, -1}
	},
	modelK3{
		{1, 1, 1, -1, -1, 1, 1}, {-1, 1, -1, -1, -1, 1, -1}, {-1, 1, -1, -1, 1, -1, -1}, {-1, 1, -1, 1, -1, -1, -1},
		{-1, 1, 1, -1, -1, -1, -1}, {-1, 1, -1, 1, -1, -1, -1}, {-1, 1, -1, -1, 1, -1, -1}, {-1, 1, -1, -1, -1, 1, -1},
		{1, 1, 1, -1, -1, 1, 1}
	}, inputA{-1, -1, 1}, inputB{-1, 1, -1}, inputC{-1, 1, 1}, inputD{1, -1, -1}, inputE{1, -1, 1}, inputJ{1, 1, -1},
	inputK{1, 1, 1}, bias{0, 0, 0}
{
	weight.resize(3, vector<double>(63, 0));
	sumvector.resize(3, 0);
}

void Calculator::train()
{
	while (abs(totalError) > errorrate)
	{
		totalError = 0;
		calculateWeights(modelA3, inputA);
		calculateWeights(modelA2, inputA);
		calculateWeights(modelA1, inputA);
		calculateWeights(modelB3, inputB);
		calculateWeights(modelB2, inputB);
		calculateWeights(modelB1, inputB);
		calculateWeights(modelC3, inputC);
		calculateWeights(modelC2, inputC);
		calculateWeights(modelC1, inputC);
		calculateWeights(modelD3, inputD);
		calculateWeights(modelD2, inputD);
		calculateWeights(modelD1, inputD);
		calculateWeights(modelE3, inputE);
		calculateWeights(modelE2, inputE);
		calculateWeights(modelE1, inputE);
		calculateWeights(modelJ3, inputJ);
		calculateWeights(modelJ2, inputJ);
		calculateWeights(modelJ1, inputJ);
		calculateWeights(modelK3, inputK);
		calculateWeights(modelK2, inputK);
		calculateWeights(modelK1, inputK);
	}
	ofstream output_file("example.txt");
	for (int row = 0; row < 3; row++)
	{
		// stop loops if nothing to read
		for (int column = 0; column < 63; column++)
		{
			output_file << weight[row][column];
			output_file << "\n";
		}
	}
	for (int i = 0; i < 3; i++)
	{
		output_file << bias[i];
		output_file << "\n";
	}
	output_file.close();
}

void Calculator::calculateWeights(const double model[9][7], const double input[])
{
	int index;
	for (int k = 0; k < 3; k++)
	{
		index = 0;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				sumvector[k] += model[i][j] * weight[k][index++];
			}
		}
		sumvector[k] += bias[k];
		if (sumvector[k] > 0)
		{
			sumvector[k] = 1;
		}
		if (sumvector[k] < 0)
		{
			sumvector[k] = -1;
		}
	}
	for (int k = 0; k < 3; k++)
	{
		index = 0;
		error = sumvector[k] - input[k];
		totalError += error;
		if (error != 0)
		{
			for (int i = 0; i < 9; i++)
			{
				for (int j = 0; j < 7; j++)
				{
					weight[k][index] = weight[k][index] + (t * model[i][j] * input[k]);
					index++;
				}
			}
			bias[k] = bias[k] + t * inputA[k];
		}
	}
}

void Calculator::findLetter()
{
	ifstream input_file("example.txt", ios::in);
	if (input_file)
	{
		for (int row = 0; row < 3; row++)
		{
			// stop loops if nothing to read
			for (int column = 0; column < 63; column++)
			{
				input_file >> weight[row][column];
			}
		}
		for (int i = 0; i < 3; i++)
		{
			input_file >> bias[i];
		}
		input_file.close();
		cout << "Input : \n";
		vector<vector<double>> inputs;
		inputs.resize(9, vector<double>(7, 0));
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				cin >> inputs[i][j];
			}
		}
		find(inputs);
	}
	else
	{
		cout << "File not found. Please train the system";
	}
}

void Calculator::find(vector<vector<double>> inputs)
{
	int index;
	for (int k = 0; k < 3; k++)
	{
		index = 0;
		for (int i = 0; i < 9; i++)
		{
			for (int j = 0; j < 7; j++)
			{
				sumvector[k] += inputs[i][j] * weight[k][index++];
			}
		}
		sumvector[k] += bias[k];
		if (sumvector[k] > 0)
		{
			sumvector[k] = 1;
		}
		else
		{
			sumvector[k] = -1;
		}
	}
	if (sumvector[0] == -1 && sumvector[1] == -1 && sumvector[2] == 1)
	{
		cout << "A Letter" << endl;
	}
	if (sumvector[0] == -1 && sumvector[1] == 1 && sumvector[2] == -1)
	{
		cout << "B Letter" << endl;
	}
	if (sumvector[0] == -1 && sumvector[1] == 1 && sumvector[2] == 1)
	{
		cout << "C Letter" << endl;
	}
	if (sumvector[0] == 1 && sumvector[1] == -1 && sumvector[2] == -1)
	{
		cout << "D Letter" << endl;
	}
	if (sumvector[0] == 1 && sumvector[1] == -1 && sumvector[2] == 1)
	{
		cout << "E Letter" << endl;
	}
	if (sumvector[0] == 1 && sumvector[1] == 1 && sumvector[2] == -1)
	{
		cout << "J Letter" << endl;
	}
	if (sumvector[0] == 1 && sumvector[1] == 1 && sumvector[2] == 1)
	{
		cout << "K Letter" << endl;
	}
	if (sumvector[0] == -1 && sumvector[1] == -1 && sumvector[2] == -1)
	{
		cout << "Not Found" << endl;
	}
}


Calculator::~Calculator()
{
}
