#include <stdio.h>

int main(void) {
	/*
	//int�� ����
	int YEAR;

	printf("�¾ �⵵ : ");
	scanf_s("%d", &YEAR);

	printf("\n�¾ �⵵�� %d���Դϴ�.", YEAR);
	
	//���ڿ� �Է�
	char str[100];

	scanf_s("%s", str, sizeof(str)); //���ڿ��� ��� sizeof��� ũ���� ��ɾ� ����.
	printf("�Է��� ���ڿ� : %s", str);
	*/

	//������ �ۼ�

	char name[10];
	printf("  �̸� : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("  ���� : ");
	scanf_s("%d", &age);

	char crime[20];
	printf("���˸� : ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n=======������ ����=======\n");
	printf("  �̸� : %s\n", name);
	printf("  ���� : %d\n", age);
	printf("���˸� : %s\n", crime);

	return 0;
}
