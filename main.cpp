#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
	int matriz [2]	[2];
	int matriz2 [2]	[2];
	int recebe [2][2];

        //le a matriz 1//
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> matriz [i][j];
		}

	}
	cout << endl;
        //imprime a matriz 1
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matriz [i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
       //le a matriz 2//
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cin >> matriz2 [i][j];
		}

	}
	cout << endl;
        //imprime a matriz 2//
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << matriz2 [i][j] << " ";
		}
		cout << endl;
	}
        //faz o calculo a matriz//
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			recebe [i][j] = 0;
			for (int k = 0; k < 2; k++)
			{
				recebe[i][j] = matriz[i][k] * matriz2[k][j] + recebe[i][j];

			}

		}

	}
	cout << endl;
        //imprime a matriz depois do calculo com o resultado//
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			cout << recebe[i][j] << " ";
		}
		cout << endl;
	}


	return 0;
}
