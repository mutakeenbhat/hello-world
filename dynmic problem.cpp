#include <limits.h>
#include <stdio.h>
int MCM(int a[], int n);

int main()
{
	int arr[] = { 1, 2, 3, 4 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printf("Minimum number of multiplications is %d ",MCM(arr, size));
	return 0;
}
int MCM(int a[], int n)
{
	int table[n][n];
    int i, j, k, L, q;
	for (i = 1; i < n; i++)
		table[i][i] = 0;
	for (L = 2; L < n; L++) {
		for (i = 1; i < n - L + 1; i++) 
		{
			j = i + L - 1;
			table[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++) 
			{
				q = table[i][k] + table[k + 1][j] + a[i - 1]* a[k] * [j] ;
				if (q < table[i][j])
					table[i][j] = q;
			}
		}
	}

	return table[1][n - 1];
}
