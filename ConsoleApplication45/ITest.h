#pragma once
#include <string>
#include <vector>
#include <iostream>

class ITest
{
public:
	ITest(const std::vector<std::string>&) {}

	virtual void Test() = 0;
};