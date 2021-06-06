#include <iostream>

using namespace std;

int main()
{
	// 'x' is a variable, '2' is a literal. '=' is 대입연산자.
	int x = 2;

	//'x, 2' is operand, '+' is operator
	cout << x + 2 << endl; 

	//조건이 참이면 1, 거짓이면 2
	int y = (x > 0) ? 1 : 2; 

	return 0;
}