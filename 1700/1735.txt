#include<stdio.h>
#pragma warning(disable:4996)
int gcd(int a, int b);
int main()
{
	int a, b;

	int  m1, m2, s1, s2,fm,fs,gcd1;
	scanf("%d %d", &s1, &m1);
	scanf("%d %d", &s2, &m2);
	fm = m1*m2;
	fs = s2*m1+s1*m2;
	gcd1 = gcd(fm, fs);
	printf("%d %d", fs / gcd1, fm / gcd1);
}
int gcd(int a, int b) {
	if (b == 0)
	{
		return(a);
	}
	else
	{
		return(gcd(b, a%b));
	}
}