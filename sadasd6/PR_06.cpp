#include <iostream>
using namespace std;
int main()
{
	srand(time(0));
	//Завдання 1
	//const int rows = 4;
	//const int cols = 3;
	//int array[rows][cols]{};
	//int count_not_0 = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		array[i][j] = rand() % 5;
	//		cout << array[i][j] << " ";
	//		if (array[i][j] != 0) count_not_0++;
	//	}
	//	cout << endl;
	//}

	//cout << "count numbers not null: " << count_not_0 << endl;

	//Завдання 2
	//const int rows = 3;
	//const int cols = 3;
	//int array[rows][cols]{};
	//int count_0 = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		array[i][j] = rand() % 5;
	//		cout << array[i][j] << " ";
	//		if (array[i][j] == 0) count_0++;
	//	}
	//	cout << endl;
	//}
	//cout << "count numbers null: " << count_0 << endl;
	//Завдання 3
	/*const int rows = 7;
	const int cols = 3;
	int array[rows][cols]{};
	int count_12 = 0;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			array[i][j] = -20 + rand() % 40;
			cout << array[i][j] << " ";
			if (array[i][j] < 12) count_12++;
		}
		cout << endl;
	}
	cout << "count numbers 12: " << count_12 << endl;*/
	//Завдання 4
	//const int rows = 4;
	//const int cols = 5;
	//int array[rows][cols]{};
	//int count_positive = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		array[i][j] = -20 + rand() % 40;
	//		cout << array[i][j] << " ";
	//		if (array[i][j] > 0) count_positive++;
	//	}
	//	cout << endl;
	//}
	//cout << "count positive numbers: " << count_positive << endl;
	//Завдання 5
	//const int rows = 5;
	//const int cols = 4;
	//int array[rows][cols]{};
	//int count_positive = 0;
	//int sum = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		array[i][j] = -20 + rand() % 40;
	//		cout << array[i][j] << " ";
	//		if (array[i][j] > 0) {
	//			sum += array[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "sum positive numbers: " << sum << endl;
	//Завдання 6
	//const int rows = 5;
	//const int cols = 4;
	//int array[rows][cols]{};
	//int count_positive = 0;
	//int sum = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		array[i][j] = -20 + rand() % 40;
	//		cout << array[i][j] << " ";
	//		if (array[i][j] < 0) {
	//			sum += array[i][j];
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "sum positive numbers: " << sum << endl;
	//Завдання 7
	//const int rows = 4;
	//const int cols = 4;
	//int array[rows][cols]{};
	//int count = 0;
	//int sum = 0;
	//for (int i = 0; i < rows; i++)
	//{
	//	for (int j = 0; j < cols; j++)
	//	{
	//		array[i][j] = -20 + rand() % 40;
	//		cout << array[i][j] << " ";
	//		if (array[i][j] % 6 == 1) {
	//			count++;
	//		}
	//	}
	//	cout << endl;
	//}
	//cout << "sum positive numbers: " << count << endl;
	//Завдання 8
	const int rows = 5;
	const int cols = 6;
	int array[rows][cols]{};
	int max = array[0][0];
	int max_row;
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (array[i][j] > max)
				max = array[i][j];
			if (array[i][j] > max_row)
				max_row = array[i][j];
		}
		cout << endl;
	}
	cout << "Max element " << max << endl;

}