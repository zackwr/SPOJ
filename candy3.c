#include<stdio.h>

int main()
{
	long long int t, t2, j, x, y;
	scanf("%lld", &t);

	while(t--) {
		x = 0;
		scanf("%lld", &t2);
		for(j=0;j<t2;j++) {
			scanf("%lld", &y);
			x = (x + y) % t2;
		}

		if(x == 0)
			printf("YES\n");
		else
			printf("NO\n");
	}
return 0;
}
