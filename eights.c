#include<stdio.h>

int main()
{
	int t;
	long long unsigned n, s;
	scanf("%d", &t);

	while(t--) {
		scanf("%llu", &n);

		s = 192+(250*(n-1));
		printf("%llu\n", s);
	}
return 0;
}
