#include <stdio.h>
#include <limits.h>
int MCM(int p[], int i, int j);
int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	printf("Minimum number of multiplications is %d ",MCM(arr, 1, n - 1));
	return 0;
}
int MCM(int a[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int min = INT_MAX;
	int count;
	for (k = i; k < j; k++)
	{
		count = MCM(a, i, k)+ MCM(a, k + 1, j)+ a[i - 1] * a[k] * a[j];

		if (count < min)
			min = count;
	}
	return min;
}


