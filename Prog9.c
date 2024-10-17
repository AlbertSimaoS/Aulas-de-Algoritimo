#include <stdio.h>

int main()
{
	int a;
	int c;
	printf("SequC*ncia dos Pares entre 2 e 30: \n");
	for (c = 2; c <= 30; c++) {
		if(c%2 == 0) {
			printf("%i \n", c);
			a += c;
		}
	}

	printf("A soma dos NC:meros C): %i", a);
	return 0;
}
