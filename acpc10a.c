#include<stdio.h>

int main()
{
	int a1, a2, a3, d1;

	while(1) {
		scanf("%d %d %d", &a1, &a2, &a3);
		if((a1 >= 10000) ||(a2 >= 10000) || (a3 >= 10000))
			return 0;
		if((a1 <= -10000) ||(a2 <= -10000) || (a3 <= -10000))
			return 0;
		if((a1 == 0) && (a2 == 0) && (a3 == 0))
			return 0;

		d1 = a3 -a2;
		if((d1) == (a2-a1))
			printf("AP %d\n", (a3+d1));
		else
			printf("GP %d\n", a3 * (a3/a2));
	}
return 0;
}
