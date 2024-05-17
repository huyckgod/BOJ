#include <iostream>
using namespace std;
typedef long long ll;

__float128 precision = 0.000000000000000000000000001;
__float128 pi = 3.14159265358979323846264338327950288419716939937510582097494459230781640628620899862803482534211706798214808651L;

__float128 sin_(__float128 x)
{
    int n= 100;
	if(x - (__float128)2 * pi> precision) x -= (int)(x / (__float128)2 / pi) * (__float128)2 * pi;
	__float128 ret = 0, p = 1, q = 1, sign = 1;
	for(int i = 1; i <= n; ++i) {
		p *= x, q *= i;
		if(i % 2 == 0) continue;
		ret += sign * p / q;
		sign *= (__float128)-1;
	}
	return ret;
}

int main() {
	int A, B, C;
	__float128 xx;
	__float128 x, sinx;
	__float128 a, b, c;
	scanf("%d %d %d", &A, &B, &C);
	a = (__float128)A;
	b = (__float128)B;
	c = (__float128)C;
	__float128 start_ = 0;
	__float128 end_ = 100000;
	while (end_ - start_ > precision) {
        x = ((start_ + end_) / (__float128)2);
		sinx = sin_(x);
		xx = a*x + b * sinx - c;
        if (xx>precision){
			end_ = x;
        }
        else {
			start_ = x;
        }
    }
    ll lx = x;
    ll ldx = (x - (__float128)lx) * (__float128)10000000;
    int carry = 0;
    if(ldx % 10 > 4) carry = 1;
    ldx = ldx/10;
    ldx += carry;
    
	printf("%lld.%06lld", lx, ldx);
	
	return 0;
}


 

























