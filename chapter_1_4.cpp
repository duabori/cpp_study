#include <iostream> // cout, cin, endl, ...
#include <cstdio> //printf

int main()
{
	using namespace std;

	cout << "I love bori!" << endl;
	
	//'\t' 를 사용하면 자동으로 줄 맞춰준다.
	cout << "abc" << "\t" << "def" << endl; 
	cout << "ab" << "\t" << "cdef" << endl;

	int x;
	cin >> x;
	
	cout << "Your input is " << x << endl;

	return 0;
}