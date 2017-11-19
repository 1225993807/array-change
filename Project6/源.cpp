#include<stdio.h>
void inv(int *x, int n);
int main()
{
	int a[10] = { 3,7,9,11,0,6,7,5,1,4 };
	int i;
	int j;
	printf("the original array:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\t", a[i]);
	}
	printf("\n");
	inv(a, 10);
	printf("the array has been inverted:\n");
	for (j = 0; j < 10; j++)
	{
		printf("%d\t", a[j]);
	}

	return 0;
}

void inv(int *x, int n)
{
	int *p, temp, *i, *j;
	int m = (n - 1) / 2;
	i = x;
	j = x + n - 1;
	p = x + m;
	for(;i<=p;i++,j--)
	{
		temp = *i;
		*i = *j;
		*j = temp;
	}

	return;
}









