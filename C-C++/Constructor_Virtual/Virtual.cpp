
// 상속관계이기 때문에 객체 생성 시 호출 순서는
// 부모 객체 생성 -> 부모 생성자 호출 -> 부모 생성자 내의 함수 호출 -> 자식 객체 생성 -> 자식 생성자 호출 -> 자식 생성자 내의 함수 호출

#include <stdio.h>
#include <iostream>


class Parent
{
public:
	Parent();

	virtual void test()
	{
		printf("Parent Test\n");
	}

};

Parent::Parent()
{
	printf("Parent\n");
	test();
}


class Child : public Parent
{
public:
	Child();

	virtual void test()
	{
		printf("Child Test\n");
	}

};

Child::Child()
{
	printf("Child\n");
	test();
}


int main(void)
{
	Child c;
	c.Parent::test();
	system("pause");
	return 0;
}


// 호출 결과
// Parent
// Parent Test
// Child
// Child Test
// Parent Test
