#include <vector>
#include <string>
#include <iostream>
#include "ITest.h"

class Test04 : ITest
{
public:
	Test04(const std::vector<std::string>& a_arrString);
	~Test04();

	virtual void Test() override;

	int Dice();
};