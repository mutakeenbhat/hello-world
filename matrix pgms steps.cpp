#include <stdio.h>
int main() {
  int r, c, a[100][100], b[100][100], sum[100][100], i, j,ps;
  printf("Enter the number of rows: ");
  scanf("%d", &r);
  printf("Enter the number of columns : ");
  scanf("%d", &c);

  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }

  printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &b[i][j]);
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  printf("\nSum of two matrices: \n");
  for (i = 0; i < r; ++i)
  {
    for (j = 0; j < c; ++j) {
      printf("%d   ", sum[i][j]);
      }
      printf("\n");
    }
 ps=12*r*c+4*c+13*r+25;
 printf("Number of program steps =%d",&ps);
  return 0;
}
