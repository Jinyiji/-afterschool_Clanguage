#include <stdio.h>

int main(void)
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
	{
		small = cap + ('a' - 'A');
	}
	printf("�빮�� : %c %c", cap, '\n');
	printf("�ҹ��� : %c", small);

	return 0;
}
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void){		
	char ch;
	printf("���� �Է� : ");
	scanf("%c", &ch);
	printf("%c ���� => �ƽ�Ű�� %d \n", ch, ch);

	return 0;
}*/