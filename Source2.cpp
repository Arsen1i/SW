#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ����� ��� ������" << endl;
	cin >> a;
	switch (a)
	{
	case 1:
		cout << " ��� �����������" << endl;
		break;
	case 2:
		cout << " ��� �������" << endl;
		break;
	case 3:
		cout << " ��� �����" << endl;
		break;
	case 4:
		cout << " ��� �������" << endl;
		break;
	case 5:
		cout << " ��� �������" << endl;
		break;
	case 6:
		cout << " ��� c������" << endl;
		break;
	case 7:
		cout << " ��� �����������" << endl;
		break;
	}
	system("pause");
	return 0;
}