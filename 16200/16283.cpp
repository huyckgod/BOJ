#include <iostream>
#include <math.h>
using namespace std;
//x+y = n
//a*x+b*y = w
int main() {
	int a, b, w, n, x, y;
	cin >> a >> b >> n >> w;
	if (a == b && a*n == w)
	{
		if (n == 2)
		{
			cout << "1 1";
		}
		else 
		{
			cout << "-1";
		}
	}
	else if (a == b) {
		cout << "-1";
	}
	else if (0 == (w - a*n) % (b - a))
	{
		y = (w - a * n) / (b - a);

		x = n - y;
		if (x <= 0 || y <= 0)
		{
			cout << "-1";
			return 0;
		}
		cout << x << " " << y;
	}
	else
	{
		cout << "-1";
	}
}