#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int StringLength(const char* string)
{
	int count = 0;
	for (int i = 0; string[i]; i++)
		count++;
	return count;
}


int main()
{
	//문자열 길이 함수 strlen
	int value = StringLength("Video");
	printf("value: %d\n", value);

	//문자열 복사 함수 strcpy

	//문자열 연결 함수 strcat
	char content1[20] = { "Hello" };
	char content2[10] = { "Update" };

	strcat(content1, content2);
	//printf("%s", content1);




	return 0;
}

