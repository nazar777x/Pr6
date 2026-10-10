//#include <iostream>
//using namespace std;
//
//int main()
//{
//
//	srand(time(0));
//
//	int a;
//	a = rand();
//	cout << "a = " << a << endl;
//	a = rand();
//	cout << "a = " << a << endl;
//	a = rand();
//	cout << "a = " << a << endl;
//
//	for (int i = 0; i < 10; i++);
//	{
//		a = rand() % 10;
//		cout << a << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 10; i++);
//	{
//		a = rand() % 100;
//		cout << a << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 30; i++);
//	{
//		a = rand() % 90 + 10;
//		cout << a << " ";
//	}
//	cout << endl;
//	for (int i = 0; i < 30; i++);
//	{
//		a = rand() % 40;
//		cout << a << " ";
//	}
//	const int size = 15;
//	int arr[size];
//	for (int i = 0; i < size; i++)
//	{
//		arr[i] = rand() % 50;
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//
//
//	int array1[3][3] = { {1,2,3}, { 4,5,6 }, {7,8,9} };
//	for (int i = 0; i < 3; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cout << array1[i][j] << " ";
//		}
//	 }
//	cout << endl;
//
//	const int rows = 4;
//	const int cols = 6;
//	int array[rows][cols]{};
//	int max = array[0][0];
//	int max_row;
//	for (int i = 0; i < rows; i++)
//	{
//		for (int j = 0; j < cols; j++)
//		{
//			if (array[i][j] > max)
//				max = array[i][j];
//			if (array[i][j] > max_row)
//				max_row = array[i][j];
//		}
//		cout << endl;
//	}
//	cout << "Max element " << max << endl;
//
//	
//
//}