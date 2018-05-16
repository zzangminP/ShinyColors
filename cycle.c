#include <stdio.h>
int main(void) {
	int a, b , c,i=0, end,ko,sum;
	scanf("%d",&a);
	end = a;
	do
	{
		b = end / 10;
		c = end % 10;
		sum = b + c;
		end = c * 10 + sum % 10;
		ko = end;
		i++;
	} while (ko != a);
	printf("%d", i);
}