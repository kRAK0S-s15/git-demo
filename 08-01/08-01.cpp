#include <iostream>

using namespace std;

long long a, b, i, k;

int main()
{
	cout << " a,b: ";
	cin >> a >> b;
	k = 0;

	for (i = 0; i < b; i++)
	{
		k = k + a;
	}
	cout << "a*b" << "=" << k << "\n";

	return 0;
}