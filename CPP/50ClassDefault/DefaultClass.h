#pragma once

class DefaultClass
{
private:



public:
	// ����Ʈ ������
	DefaultClass();

	// ����Ʈ ���� ������
	DefaultClass(const DefaultClass& _Other);

	// RValue ���۷��� ������
	DefaultClass(DefaultClass&& _Other);

	// ����Ʈ �Ҹ���
	~DefaultClass();

	DefaultClass& operator=(const DefaultClass)

		
};

