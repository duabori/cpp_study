#include <iostream>

using namespace std;

int main()
{
	/*count�� for�� �ۿ����� ����Ϸ��� �Ʒ��� ���� 'int count = 0;' �� for�� �ۿ� ��� �ȴ�.
	for(;;++count)�� ���ѷ���*/

	int count = 0;
	for (; count < 10; ++count)
	{
		cout << count << endl;
	}
	cout << count << endl;

	return 0;
}