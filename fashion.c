#include<stdio.h>

void merge(int a[], int l, int m, int h)
{
	int a1[h/2], a2[h/2];
	int n1, n2, i, j, k;

	n1 = m-l+1;
	n2 = h-m;

	for(i=0;i<n1;i++)
		a1[i] = a[l+i];
	for(j=0;j<n2;j++)
		a2[j] = a[m+j+1];

	a1[i] = 1000000;
	a2[j] = 1000000;
	i = 0;
	j = 0;

	for(k=l;k<=h;k++) {
		if(a1[i] <= a2[j])
			a[k] = a1[i++];
		else
			a[k] = a2[j++];
	}
}

void mergesort(int a[], int l, int h)
{
	if(l < h) {
		int m = (h+l)/2;
		mergesort(a, l, m);
		mergesort(a, m+1, h);
		merge(a, l, m, h);
	}	
}

int main()
{
	int t, n, i, s = 0;
	scanf("%d", &t);

	while(t--) {
		scanf("%d", &n);
		if((n < 1) || (n > 1000))
				return 0;
		int men[n], women[n];
		for(i=0;i<n;i++) {
			scanf("%d", &men[i]);
			if((men[i] > 10) || (men[i] < 0))
				return 0;
		}
		for(i=0;i<n;i++) {
			scanf("%d", &women[i]);
			if((women[i] > 10) || (women[i] < 0))
				return 0;
		}

		mergesort(men, 0 , n-1);
		mergesort(women, 0 , n-1);

		for(i=0;i<n;i++)
			s += men[i] * women[i];

		printf("%d\n", s);
		s = 0;
	}
return 0;
}
