#include <stdio.h>
#include <string.h>


void reverse(char *x, int first, int end)
{
char c;
if (first >= end)
return;
c = *(x + first);
*(x + first) = *(x + end);
*(x + end) = c;
reverse(x, ++first, --end);
}

int main()
{
char a[100];
printf("Enter word to reverse: \n ") ;
scanf("%s", a);
reverse(a, 0, strlen(a) - 1);
printf(a);
return 0;
}
