#pragma once
#include <iostream>
#include <vector>
#include <cmath>
#include <iterator>
#include <fstream>

using namespace std;

class Calculator
{
public:
	Calculator();
	void train();
	void findLetter();
	~Calculator();
private:
	double t = 0.1;
	double errorrate = 0.0001;
	double error = 0.5;
	double totalError = 123;
	vector<double> sumvector;
	const double modelA1[9][7];
	const double modelB1[9][7];
	const double modelC1[9][7];
	const double modelD1[9][7];
	const double modelE1[9][7];
	const double modelJ1[9][7];
	const double modelK1[9][7];

	const double modelA2[9][7];
	const double modelB2[9][7];
	const double modelC2[9][7];
	const double modelD2[9][7];
	const double modelE2[9][7];
	const double modelJ2[9][7];
	const double modelK2[9][7];

	const double modelA3[9][7];
	const double modelB3[9][7];
	const double modelC3[9][7];
	const double modelD3[9][7];
	const double modelE3[9][7];
	const double modelJ3[9][7];
	const double modelK3[9][7];


	const double inputA[3];
	const double inputB[3];
	const double inputC[3];
	const double inputD[3];
	const double inputE[3];
	const double inputJ[3];
	const double inputK[3];

	double bias[3];

	vector<vector<double>> weight;

	void calculateWeights(const double [9][7], const double []);

	void find(vector<vector<double>>);
};
