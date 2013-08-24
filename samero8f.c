#include<stdio.h>

int sq(int n)
{
	if(n == 1)
		return 1;
return (n*n)+(sq(n-1));
}

int main()
{
	int n;
	while(1) {
		scanf("%d", &n);
		if((n == 0) || (n>100))
			return 0;
		printf("%d\n", sq(n));
	}
return 0;
}
