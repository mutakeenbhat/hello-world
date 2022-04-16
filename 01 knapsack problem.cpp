
#include <stdio.h>
int max(int a, int b) ;

int knapSack(int c, int wt[], int val[], int n);
int main()
{
	int val[] = { 60, 100, 120 };
	int wt[] = { 10, 20, 30 };
	int c = 50;
	int n = sizeof(val) / sizeof(val[0]);
	printf("%d is the maximum profit", knapSack(c, wt, val, n));
	return 0;
}
int max(int a, int b) 
{
	if(a>b)
	return a;
	else
    return b;
 }

int knapSack(int c, int wt[], int val[], int n)
{
	if (n == 0 || c == 0)
		return 0;
	if (wt[n - 1] > c)
		return knapSack(c, wt, val, n - 1);
	else
		return max(
			val[n - 1]
				+ knapSack(c - wt[n - 1],
						wt, val, n - 1),
			knapSack(c, wt, val, n - 1));
}

