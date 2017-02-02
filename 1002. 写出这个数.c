#include <stdio.h>
#include <string.h>

int main()
{
	char n[100];
	gets(n);
	int i, len, sum = 0, sumlen[100], count = 0;
	len = strlen(n);
	for (i = 0; i < len; i++)
	{
		sum += n[i] - '0';
	}
	char *shuzi[10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	i = 0;
	while(sum)
	{
		sumlen[i++] = sum % 10;
		sum /= 10;
		count++;
	}
	for(i = count - 1; i > 0; i--)
	{
		printf("%s ",shuzi[sumlen[i]]);
	}
	printf("%s",shuzi[sumlen[i]]);
}
