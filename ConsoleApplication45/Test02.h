#include <vector>
#include <string>
#include <iostream>
#include "ITest.h"

class Test02 : ITest
{
public:
	Test02(const std::vector<std::string>& a_arrString);
	~Test02();

	virtual void Test() override;

	int Password();
};