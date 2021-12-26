#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter n: ";
	cin >> n;

int res = 1;
int p = n;

while(p)
        res *= p--;

cout << n << "! = " << res << endl;
	return 0;
}
