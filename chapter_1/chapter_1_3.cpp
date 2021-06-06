#include <iostream>

int main() 
{
	int x = 1;
	x = x + 2;
	std::cout << x << std::endl;

	int y = x;
	std::cout << y << std::endl;

	//(x + y) is l-value
	std::cout << x + y << std::endl; 

	std::cout << x << std::endl;

	int z = 1;
	std::cout << z << std::endl;

	return 0;

	/*'x=123;'은 'x라는 변수가 가리키고 있는 메모리 공간에 123이라는 정수를 저장시켜놓는다' 라는 뜻이다.
	C++에서 모든 표현식은 l-value 또는 r-value이다. l-value는 단일 표현식 이후에도 없어지지 않고
	지속되는 객체이고, r-value는 표현식이 종료된 이후에는 더이상 존재하지 않는 임시적인 값이다.
	& 연산자는 l-value를 요구하기때문에 표현식에 &연산자를 붙여보면 l-value, r-value 확인할 수 있다.
	*/
}