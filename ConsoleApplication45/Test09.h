#pragma once

#include <vector>
#include <string>

#include "ITest.h"

class Test09 : ITest
{
public:
	Test09(const std::vector<std::string>& a_arrString);
	~Test09();

	virtual void Test() override;

	std::string Shipeasy();
};