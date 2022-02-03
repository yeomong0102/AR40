#pragma once

class DefaultClass
{
private:



public:
	// 디폴트 생성자
	DefaultClass();

	// 디폴트 복사 생성자
	DefaultClass(const DefaultClass& _Other);

	// RValue 레퍼런스 생성자
	DefaultClass(DefaultClass&& _Other);

	// 디폴트 소멸자
	~DefaultClass();

	DefaultClass& operator=(const DefaultClass)

		
};

