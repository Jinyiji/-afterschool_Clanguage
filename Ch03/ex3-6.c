#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	char fruit[20] = "strawberry";

	printf("%s\n", fruit);
	strcpy(fruit, "banana");
	printf("%s\n", fruit);

} /*
char �迭�� ���ڿ� ���� ���α׷� ���� 3-6,64
char fruit[20] = " starawberry";

	printf("���� : %s\n", fruit);
	printf("������ : %s %s\n", fruit, "jam");

	return 0;
*/