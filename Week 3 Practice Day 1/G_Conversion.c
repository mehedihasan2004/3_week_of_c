#include <stdio.h>
#include <string.h>

int main()
{
      char s[100001];
      scanf("%s", s);

      for (int i = 0; i < strlen(s); i++)
      {

            if (s[i] == 44)
                  printf(" ");
            else if (s[i] >= 97 && s[i] <= 122)
                  printf("%c", s[i] - 32);
            else
                  printf("%c", s[i] + 32);
      }

      return 0;
}