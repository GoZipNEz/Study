#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
	stack<int> stack1;
	stack<int> stack2;

	int Index = 0;

	stack1.push(1);		// 1
	stack1.push(2);		// 2, 1
	stack1.pop();		// 1
	stack1.push(3);		// 3, 1
	stack1.push(4);		// 4, 3, 1

	stack2.push(11);	// 11
	stack2.push(12);	// 12, 11
	stack2.push(13);	// 13, 12, 11
	stack2.pop();		// 12, 11
	stack2.push(14);	// 14, 12, 11

	swap(stack1, stack2);

	printf("stack1[ ");
	while (!stack1.empty())
	{
		printf("%d ", stack1.top());
		stack1.pop();
	}
	printf("]\n");

	printf("stack2[ ");
	while (stack2.size() > 0)
	{
		printf("%d ", stack2.top());
		stack2.pop();
	}
	printf("]\n");

	system("pause");
	return 0;
}
