#pragma once
#include <stdio.h>
#include <conio.h>
#include <windows.h>
void ReadtxtFile(const char* fileName)
{
	FILE* readPtr = fopen(fileName, "r");
	char buffer[10000] = { 0, };
	//���� ��ü �б�
	fread(buffer, 1, 10000, readPtr);
	printf("%s", buffer);

	fclose(readPtr);
}