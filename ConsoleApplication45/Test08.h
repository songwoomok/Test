#pragma once

#include <vector>
#include <string>

#include "ITest.h"

class Test08 : ITest
{
public:
	Test08(const std::vector<std::string>& a_arrString);
	~Test08();

	virtual void Test() override;

	
};