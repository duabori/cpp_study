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

	/*'x=123;'�� 'x��� ������ ����Ű�� �ִ� �޸� ������ 123�̶�� ������ ������ѳ��´�' ��� ���̴�.
	C++���� ��� ǥ������ l-value �Ǵ� r-value�̴�. l-value�� ���� ǥ���� ���Ŀ��� �������� �ʰ�
	���ӵǴ� ��ü�̰�, r-value�� ǥ������ ����� ���Ŀ��� ���̻� �������� �ʴ� �ӽ����� ���̴�.
	& �����ڴ� l-value�� �䱸�ϱ⶧���� ǥ���Ŀ� &�����ڸ� �ٿ����� l-value, r-value Ȯ���� �� �ִ�.
	*/
}