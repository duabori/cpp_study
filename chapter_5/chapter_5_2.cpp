#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	/*if�� ���� 'x'�� local variable�� ����� ��� �ȿ����� ��ȿ�ϰ�, 
	����� ����Ǹ� �޸𸮿��� �������. 
	���࿡ 3�� �Է��ϸ� 3�� ��µȴ�.
	�� if(x = 0) �� x = 0; if(x) �� ����. �׻� false�� �ȴ�. if(x == 0)�� �򰥸��� �ʱ�.*/

	if (1)
	{
		int x = 5;
	}
	else
	{
		int x = 6;
	}
	cout << x << endl;

	return 0;
}