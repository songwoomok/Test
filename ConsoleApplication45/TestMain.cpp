// ConsoleApplication45.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
#include <iostream>

#include "Test09.h"
#include "Test02.h"
#include "Test04.h"


int main()
{	
	Test02 a{ {""} };
	a.Test();

	Test04 b{ {""} };
	b.Test();

	Test09 c{ {""} };
	c.Test();
	
	return 0;
}