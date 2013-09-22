#include<stdio.h>

int main()
{
	int t;
	scanf("%d", &t);

	while(t--) {
		int n, i;
		scanf("%d", &n);
		double sum = 1;

		for(i=2;i<=n;i++)
			sum += 1.0/i;
		sum *= n;
		printf("%.2f\n", sum);
	}
return 0;
}
