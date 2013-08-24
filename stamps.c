#include<stdio.h>

void quicksort(int a[], int l, int h)
{
	if(l>=h)
		return;
	int p = a[l];

	int i = l, j, t;
	for(j=l+1;j<=h;j++) {
		if(a[j] < p) {
			i++;
			t = a[i];
			a[i] = a[j];
			a[j] = t;
		}
	}
	t = a[i];
	a[i] = a[l];
	a[l] = t;

	quicksort(a, l, i-1);
	quicksort(a, i+1, h);
}

int main()
{
	int t, s, f, i, x, j = 1, k;
	scanf("%d", &t);

	while(t--) {
		k = 0;
		x = 0;
		scanf("%d %d", &s, &f);
		int sf[f];
		for(i=0;i<f;i++)
			scanf("%d", &sf[i]);
		quicksort(sf, 0 , f-1);
		/*for(i=0;i<f;i++)
			printf("%d ", sf[i]);
		printf("\n");*/

		for(i=f-1;x<s;i--) {
			x += sf[i];
			k++;
		}
		printf("Scenario #%d:\n", j);
		if(k > f)
			printf("impossible\n\n");
		else
			printf("%d\n\n", k);
		j++;

	}

return 0;
}
