#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	if (x == 2)
		cout << "NO";
	else if ((x % 2 == 0 && x >= 1 && x <= 100))
		cout << "YES";
	else
		cout << "NO";

	return 0;
	

}
