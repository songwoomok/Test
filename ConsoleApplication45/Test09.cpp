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

	// 각종 테스트 최소 5개이상
}

std::string Test09::Shipeasy()
{
	std::string a;

	int year;
	std::cin >> year;
	year -= 3;

	if (year % 10 == 1) { a = "갑 "; }
	else if (year % 10 == 2) { a = "을 "; }
	else if (year % 10 == 3) { a = "병 "; }
	else if (year % 10 == 4) { a = "정 "; }
	else if (year % 10 == 5) { a = "무 "; }
	else if (year % 10 == 6) { a = "기 "; }
	else if (year % 10 == 7) { a = "경 "; }
	else if (year % 10 == 8) { a = "신 "; }
	else if (year % 10 == 9) { a = "임 "; }
	else if (year % 10 == 0) { a = "계 "; }

	if (year % 12 == 1) { a += "자"; }
	else if (year % 12 == 2) { a += "축"; }
	else if (year % 12 == 3) { a += "인"; }
	else if (year % 12 == 4) { a += "묘"; }
	else if (year % 12 == 5) { a += "진"; }
	else if (year % 12 == 6) { a += "사"; }
	else if (year % 12 == 7) { a += "오"; }
	else if (year % 12 == 8) { a += "미"; }
	else if (year % 12 == 9) { a += "신"; }
	else if (year % 12 == 10) { a += "유"; }
	else if (year % 12 == 11) { a += "술"; }
	else if (year % 12 == 0) { a += "해"; }

	return a;
}