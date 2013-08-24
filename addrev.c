#include<stdio.h>

int rev(int n)
{
	int t = n, r = 0;
	while(t!=0) {
		r *= 10;
		r+= t%10;
		t /= 10;
	}
return r;
}

int main()
{
	int n1, n2, t;

	scanf("%d", &t);

	while(t--) {
		scanf("%d %d", &n1, &n2);
		
		printf("%d\n", rev(rev(n1)+rev(n2)));
	}
return 0;
}
