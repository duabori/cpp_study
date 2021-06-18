#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;
	cout << (bValue ? 1 : 0) << endl; //bool형도 숫자로 바꾸어 저장된다. 분기문에서는 0이 아니면 true.
	
	char chValue = 65;
	cout << chValue << endl; //'A'가 출력된다. 문자도 숫자로 바꾸어 저장된다. 

	//double, float은 수학적으로 접근하는 것만큼 정밀하지 않다.(뒤에서 다시 설명듣기)
	float fValue = 3.141592f;
	cout << fValue << endl;
	
	double dValue = 3.141592; //double은 float보다 저장공간이 2배, 더 정밀하다.
	cout << dValue << endl; 
	
	auto aValue = 3.141592; //auto는 자료형을 자동으로 선언한다.
	cout << aValue << endl;

	cout << sizeof(int) << endl; //sizeof()는 변수명을 넣어도 되고, datatype을 넣어도 된다. 

	/* 초기화 하는 방법
	1) int a = 123;  ---> copy initialization, int a = 2.5 컴파일 하면 warning
	2) int a(123); ---> direct initialization , int a(2.5) 컴파일 하면 warning
	3) int a { 123 }; ---> uniform initialization, 제일 정밀하다. int { 2.5 }를 컴파일 하면 error
	4) int k, l, m; ','를 사용하여 같은 타입의 변수를 선언할 수 있다.

	사용하기 직전에 변수를 선언하는 것이 선호, 변수와 기능하는 부분이 붙어있어야 디버깅하기가 편하고, 
	리펙토링하기가 편하다. 
	*/


	return 0;
}