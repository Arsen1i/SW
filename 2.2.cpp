#include <iostream>
#include <ctime>

using namespace std;

void findlowernumber(int* array, int size)
{
	cout << "�������� �������, ������� ������ �������� ���� ���������� ���������: " << endl;

	int a = 0;

	for (int i = 2; i < size; i++)
	{
		if (array[i] < (array[i - 2] - array[i - 1]))
		{
			cout << array[i] << endl;
		}
	}

	if (a == 0)
	{
		cout << "����� ��������� ���" << endl;
	}
}
int main()
{
	setlocale(LC_ALL, "RUS");
	size_t size;

	cout << "������� ������ ������� ";

	cin >> size;

	int* array = new int[size];
	
	cout << " ������ � ������� �����: ";
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 10;

		cout << array[i] << " ";

		cout << endl;
	}

	
	cout << " ";
	findlowernumber(array, size);
	system("pause");
}

