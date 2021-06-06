#include <iostream>

using namespace std;

int main()
{
	int x(0);

	cout << x << " " << &x << endl;
	
	{
		int x(0);

		cout << x << " " << &x << endl;
	}

	return 0;
}

/* 지역 변수는 영역을 벗어나면 사용할 수 없게 된다. 지역변수가 차지하고 있던 메모리는 그 지역 변수가
영역을 벗어날 때 stack메모리로 반납된다.
반납된 메모리는 다음 지역 변수가 사용할 수 있도록 대기한다.
*/