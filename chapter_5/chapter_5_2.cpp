#include <iostream>

using namespace std;

int main()
{
	int x;
	cin >> x;

	/*if문 안의 'x'는 local variable로 선언된 블록 안에서만 유효하고, 
	블록이 종료되면 메모리에서 사라진다. 
	만약에 3을 입력하면 3이 출력된다.
	또 if(x = 0) 은 x = 0; if(x) 와 같다. 항상 false가 된다. if(x == 0)과 헷갈리지 않기.*/

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