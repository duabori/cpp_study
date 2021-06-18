#include <iostream>

int main()
{
	using namespace std;

	bool bValue = false;
	cout << (bValue ? 1 : 0) << endl; //bool���� ���ڷ� �ٲپ� ����ȴ�. �б⹮������ 0�� �ƴϸ� true.
	
	char chValue = 65;
	cout << chValue << endl; //'A'�� ��µȴ�. ���ڵ� ���ڷ� �ٲپ� ����ȴ�. 

	//double, float�� ���������� �����ϴ� �͸�ŭ �������� �ʴ�.(�ڿ��� �ٽ� ������)
	float fValue = 3.141592f;
	cout << fValue << endl;
	
	double dValue = 3.141592; //double�� float���� ��������� 2��, �� �����ϴ�.
	cout << dValue << endl; 
	
	auto aValue = 3.141592; //auto�� �ڷ����� �ڵ����� �����Ѵ�.
	cout << aValue << endl;

	cout << sizeof(int) << endl; //sizeof()�� �������� �־ �ǰ�, datatype�� �־ �ȴ�. 

	/* �ʱ�ȭ �ϴ� ���
	1) int a = 123;  ---> copy initialization, int a = 2.5 ������ �ϸ� warning
	2) int a(123); ---> direct initialization , int a(2.5) ������ �ϸ� warning
	3) int a { 123 }; ---> uniform initialization, ���� �����ϴ�. int { 2.5 }�� ������ �ϸ� error
	4) int k, l, m; ','�� ����Ͽ� ���� Ÿ���� ������ ������ �� �ִ�.

	����ϱ� ������ ������ �����ϴ� ���� ��ȣ, ������ ����ϴ� �κ��� �پ��־�� ������ϱⰡ ���ϰ�, 
	�����丵�ϱⰡ ���ϴ�. 
	*/


	return 0;
}