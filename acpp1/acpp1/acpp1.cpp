#include <iostream>
#include <string>


void ex6(){

	std::cout << "Hello, who might you be?" << std::endl;
	
	std::string name;
std::cin >> name;	
std::cout << "Nice to meet you, " << name << std::endl << "and you?" << std::endl;
std::cin >> name;
std::cout << "Nice to meet you too, " << name " Glorifax!"<< std::endl; 



}

int main()
{

	ex6();
	// ������� ����������, ���� ���� ��� ������� ������� ����������
	std::string name;

	// ������, ��� ��� �����, � �������� ���� � ����������
	std::cout << "Who might you be?" << std::endl;
	std::cin >> name;
	

	// ����������� ��� ���������� ����
	const std::string greeting = "Hello, " + name + "!";
	{const std::string goodbye = "Farewell, " + name + "!";
	std::cout << goodbye << std::endl;
	{const std::string goodbye = "Godspeed, " + name + "!";
	std::cout << goodbye << std::endl;};;;;}
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
std::cout << name +", left" + " associate"<<std::endl;
// std::cout <<  "right " + "associate, "+ name; 
std::cout << first <<std::endl;



	return 0;
}

	