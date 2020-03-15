#include <stdio.h>

int main(void) {
	/*
	//int형 변수
	int YEAR;

	printf("태어난 년도 : ");
	scanf_s("%d", &YEAR);

	printf("\n태어난 년도는 %d년입니다.", YEAR);
	
	//문자열 입력
	char str[100];

	scanf_s("%s", str, sizeof(str)); //문자열의 경우 sizeof라는 크기명시 명령어 선언.
	printf("입력한 문자열 : %s", str);
	*/

	//경조사 작성

	char name[10];
	printf("  이름 : ");
	scanf_s("%s", name, sizeof(name));

	int age;
	printf("  나이 : ");
	scanf_s("%d", &age);

	char crime[20];
	printf("범죄명 : ");
	scanf_s("%s", crime, sizeof(crime));

	printf("\n=======범죄자 정보=======\n");
	printf("  이름 : %s\n", name);
	printf("  나이 : %d\n", age);
	printf("범죄명 : %s\n", crime);

	return 0;
}
