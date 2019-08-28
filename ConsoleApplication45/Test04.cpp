#include "pch.h"
#include "Test04.h"
#include <algorithm>
Test04::Test04(const std::vector<std::string>& a_arrString)
	: ITest(a_arrString)
{
}

Test04::~Test04()
{

}

void Test04::Test()
{
	Test04 a{ {""} };

	std::cout << a.Dice() << std::endl;
	// 각종 테스트 최소 5개이상
}


int Test04::Dice()
{
	int a, b;
	int arr[1000];
	int nMax = 0;

	std::cin >> a;

	for (int i = 0; i < a; ++i)
	{
		int j, k, l;
		std::cin >> j >> k >> l;

		if (j == k || k == l)
		{
			arr[i] = (j * 1000) + 5000;
		}
		else if (j == k != l || j != k == l || j == l != k)
		{
			int Temp = std::max(j, k);
			int Max = std::max(Temp, l);
			arr[i] = (Max * 500) + 2000;
		}
		else if (j != k != l)
		{
			int Temp = std::max(j, k);
			int Max = std::max(Temp, l);
			arr[i] = Max * 200;
		}
	}

	for (int i = 0; i < a - 1; ++i)
	{
		if (nMax < std::max(arr[i], arr[i + 1]))
		{
			nMax = std::max(arr[i], arr[i + 1]);
		}
	}

	return nMax;
}