#include "pch.h"
#include "Test09.h"

Test09::Test09(const std::vector<std::string>& a_arrString)
	: ITest(a_arrString)
{

}

Test09::~Test09()
{

}



void Test09::Test()
{
	Test09 a{ {""} };
	std::cout << a.Shipeasy() << std::endl;

	// ���� �׽�Ʈ �ּ� 5���̻�
}

std::string Test09::Shipeasy()
{
	std::string a;

	int year;
	std::cin >> year;
	year -= 3;

	if (year % 10 == 1) { a = "�� "; }
	else if (year % 10 == 2) { a = "�� "; }
	else if (year % 10 == 3) { a = "�� "; }
	else if (year % 10 == 4) { a = "�� "; }
	else if (year % 10 == 5) { a = "�� "; }
	else if (year % 10 == 6) { a = "�� "; }
	else if (year % 10 == 7) { a = "�� "; }
	else if (year % 10 == 8) { a = "�� "; }
	else if (year % 10 == 9) { a = "�� "; }
	else if (year % 10 == 0) { a = "�� "; }

	if (year % 12 == 1) { a += "��"; }
	else if (year % 12 == 2) { a += "��"; }
	else if (year % 12 == 3) { a += "��"; }
	else if (year % 12 == 4) { a += "��"; }
	else if (year % 12 == 5) { a += "��"; }
	else if (year % 12 == 6) { a += "��"; }
	else if (year % 12 == 7) { a += "��"; }
	else if (year % 12 == 8) { a += "��"; }
	else if (year % 12 == 9) { a += "��"; }
	else if (year % 12 == 10) { a += "��"; }
	else if (year % 12 == 11) { a += "��"; }
	else if (year % 12 == 0) { a += "��"; }

	return a;
}