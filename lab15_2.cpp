#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void randData(double *, int, int);

void findColSum(const double *, double *, int, int);

void showData(double *, int, int);

int main()
{
	srand(time(0));
	const int N = 7, M = 7;
	double data[N][M] = {};
	double result[M] = {};
	double *dPtr = data[0];
	randData(dPtr, N, M);
	showData(dPtr, N, M);

	cout << "---{{{(>_<)}}}----._____.--------____--------0-------/\-------///---{{{(>_<)}}}\n";

	findColSum(dPtr, result, N, M);
	showData(result, 1, M);
}

//Write definition of randData(), showData() and findColSum()
void randData(double *dPtr, int N, int M)
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			double RD = (rand() % 101) / 100.00;
			*(dPtr + j) = RD;
		}
		dPtr++;
	}
}

void findColSum(const double *a, double *b, int N, int M)
{

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			*(b + j) += *(a + j);
		}
		a++;
	}
}
void showData(double *dPtr, int N, int M)
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cout << *(dPtr + j) << " ";
		}
		dPtr++;
		cout << endl;
	}
}
