#include <iostream>
#include <string>

int main()
{

	// ������� ����������, ���� ���� ��� ������� ������� ����������
	std::string name;

	// ������, ��� ��� �����, � �������� ���� � ����������
	std::cout << "Who might you be?" << std::endl;
	std::cin >> name;
	

	// ����������� ��� ���������� ����
	const std::string greeting = "Hello, " + name + "!";
	const std::string spaces(greeting.size(), ' ');
	const std::string first(greeting.size()+4, '*');
	const std::string second = "* "+spaces+" *";
	const std::string third = "* " + greeting+ " *";

	//
	//

	// ��������� ���������
	std::cout << first <<std::endl;
std::cout << second <<std::endl;
std::cout << third <<std::endl;
std::cout << second <<std::endl;

std::cout << first <<std::endl;

	return 0;
}

	