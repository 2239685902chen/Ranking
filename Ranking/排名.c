#include <stdio.h>
//被排名数与它右边的数比较
int Left_comparison(int* q, int y,int n)
{
	int w = 1;
	do
	{
		if (q[y] < q[y - n])
		{
			w++;
		}
		n++;
	} while (y - n >= 0);
	return w;
}
void Ranking(int* q, int e)
{
	int left = 0;
	int right = e;
	int w = 0;
	for (w = 0; w < right; w++)
	{
		int t = 1;
		int y = 0;
		int r = 0;
		int u = 1;
		int n = 1;
		r = w;
		y = w;
		if (y != 0)
		{
			t = Left_comparison(q, y, n);
		}
		//被排名数与它左边的数比较
		for (left = 0; left < right - w - 1; left++)
		{
			
			if (q[r] < q[r + u])
			{
				t++;
			}
			u++;
		}
		printf("%03d ", t);
	}
	printf("\n");
}
int main()
{
	int q[] = { 572,618,617,642,567,638,554,538,634,577,445};
	int w = 0;
	int e = sizeof(q) / sizeof(q[0]);
	for (w = 0; w < e; w++)
	{
		printf("%d ", q[w]);
	}
	printf("\n");
	Ranking(q, e);
	return 0;
}