#include <stdio.h>

int main()
{
      int i, n, pos;
      scanf("%d", &n);

      int a[n];
      for (i = 0; i < n; i++)
            scanf("%d", &a[i]);

      scanf("%d", &pos);
      for (i = pos; i < n - 1; i++)
            a[i] = a[i + 1];

      for (i = 0; i < n; i++)
            printf("%d ", a[i]);

      return 0;
}