#include "pch.h"
#include "Test02.h"

Test02::Test02(const std::vector<std::string>& a_arrString)
	: ITest(a_arrString)
{
}

Test02::~Test02()
{

}

void Test02::Test()
{
	Test02 a{ {""} };
	
	std::cout << a.Password() << std::endl;
	// 각종 테스트 최소 5개이상
}



int Test02::Password()
{
	int a, b, c, d, e;
	int Result;
	std::cin >> a >> b >> c >> d >> e;

	a *= a;
	b *= b;
	c *= c;
	d *= d;
	e *= e;

	Result = (a + b + c + d + e) % 10;

	return Result;
}
