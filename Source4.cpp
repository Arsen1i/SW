#include <iostream>
int main() {
	setlocale(LC_ALL, "Russian");
	int a, b, y, x, z;
	std::cout << "������� ������ � ������ ����� ";
	std::cout << "������ �����: ";
	std::cin >> a;
	std::cout << "������ �����:  ";
	std::cin >> b;
	std::cout << "������� ������, ����� � ������ ��������������� : ";
	std::cout << "������ �����: ";
	std::cin >> y;
	std::cout << " ������ �����:";
	std::cin >> x;
	std::cout << "����� �����:";
	std::cin >> z;
	if (x < b && y < a && z < b && z < a)
	{
		std::cout << "��� �������� ";
	}
	else
		std::cout << "��� ���������� ";
	system("pause");
	return 0;

}