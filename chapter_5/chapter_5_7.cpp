#include <iostream>

using namespace std;

int main()
{
	/*count를 for문 밖에서도 사용하려면 아래와 같이 'int count = 0;' 을 for문 밖에 적어도 된다.
	for(;;++count)는 무한루프*/

	int count = 0;
	for (; count < 10; ++count)
	{
		cout << count << endl;
	}
	cout << count << endl;

	return 0;
}