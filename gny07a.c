#include<stdio.h>

int strlen(char *c)
{
	int x = 0;
	while(*(c+x))
		x++;
return x;
}
int main()
{
	char s[81];
	s[81] = 'a';
	int t, n, i, j=0;
	scanf("%d", &t);

	while(t--) {
		j++;
		scanf("%d %s", &n, s);

		for(i=n-1;i<strlen(s);i++) {
			s[i] = s[i+1];
		}
		printf("%d %s\n", j, s);
	}
return 0;
}
