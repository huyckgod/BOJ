#include <stdlib.h>
#include <iostream>
#include <math.h>
#include<string>
#include <inttypes.h>

#define M_PI_M_2 (M_PI*2.0f)
#define pow10 10000000000000

using namespace std;

typedef long long ll;

int compare_float(__float128 f1, __float128 f2)
{
	__float128 precision = 0.00000000000000001;
	if((f1 - precision) < f2)
	{
		return -1;
	}
	else if((f1 + precision) > f2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

__float128 _cos(__float128 x) {
	if(x < 0.0f)
		x = -x;

	if(0 <= x- M_PI_M_2)
	{
		do {
			x -= M_PI_M_2;
		}
		while(0 <= x-M_PI_M_2);
	}
	__float128 taylor_series = 1.0;
	int i = 1000;
	if((0 <= x- M_PI) && (x<M_PI_M_2))
	{
		x -= M_PI;
		for(; i > 0; i -= 2)
		{
			taylor_series = 1.0f - ((x * x) / (__float128)(i * (i - 1))) * taylor_series;
		}
		return (-1) * taylor_series;
	}
	for(; i > 0; i -= 2)
	{
		taylor_series = 1.0f - ((x * x) / (__float128)(i * (i - 1))) * taylor_series;
	}
	return taylor_series;
}

__float128 _sin(__float128 x) {
	return _cos(x - M_PI_2);
}


int main() {
	ll A, B, C;
	__float128 xx;
	__float128 x, sinx;
	scanf("%lld %lld %lld", &A, &B, &C);
	__float128 start_ = (__float128)(C - B) / (__float128)A;
	__float128 end_ = (__float128)(C + B) / (__float128)A;
	for(;;)
	{
		x = ((start_ + end_) / 2);
		sinx = _sin(x);
		xx = (__float128)A*x + (__float128)B * sinx - C;
		if(xx == (__float128)0) {
			break;
		}
		else if(xx < (__float128)0) {
			if(start_ == x)
			{
				break;
			}
			start_ = x;
		}
		else if(xx > (__float128)0) {
			if(end_ == x)
			{
				break;
			}
			end_ = x;
		}
	}
	
	
    long long lx = x;
    long long ldx = (x - lx) * 10000000000000000;
    
	printf("%lld.%016lld", lx, ldx);
	
	return 0;
}


 

























