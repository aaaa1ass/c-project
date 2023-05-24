#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void ReadtxtFile(const char* fileName)
{
	FILE* readPtr = fopen(fileName, "r");
	char buffer[10000] = { 0, };
	//파일 전체 읽기
	fread(buffer, 1, 10000, readPtr);
	printf("%s", buffer);

	fclose(readPtr);
}