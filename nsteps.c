#include<stdio.h>

int ISODD(x) {return x%2==0?0:1;}

int main()
{
	int t, n, m;

	scanf("%d", &t);

	while(t--) {
		scanf("%d %d", &n, &m);
		if((n || m) > 10000)
			return 0;
		if((n || m) < 0)
			return 0;
		if((m > n) || ((n - m) 	>= 3))
	       		printf("No Number\n");
		else	{
			if((ISODD(n) == 1) && (ISODD(m) == 1))
				printf("%d\n", m+n-1);
			else if (((ISODD(n) == 0) && (ISODD(m) == 1)) || ((ISODD(n) == 1) && (ISODD(m) == 0)))
				printf("No Number\n");
			else if ((ISODD(n) == 0) && (ISODD(m) == 0))
				printf("%d\n", m+n);
			} 
	}
return 0;
}
