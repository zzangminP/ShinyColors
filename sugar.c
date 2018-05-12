#include <stdio.h>

int main(void) {
	int n, x;
	scanf("%d", &n);
	switch (n)
	{
	case 0:
		printf("0");
		break;
	case 1:
		printf("-1");
		break;
	case 2:
		printf("-1");
		break;
	case 4:
		printf("-1"); 
		break;
	case 7:
		printf("-1");
		break;
	default:

		if ((n % 5 == 0)) {
			x = n / 5;
			printf("%d", x);
		}
		else if ((n % 5 == 1) || (n % 5 == 3)) {
			x = n / 5 + 1;
			printf("%d", x);
		}
		else if ((n % 5 == 2) || (n % 5 == 4)) {
			x = n / 5 + 2;
			printf("%d", x);
		}

		break;
	}

}