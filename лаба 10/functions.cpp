#include<stdio.h>
#include<locale.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
#pragma warning(disable:4996)
const int size_of_string(50);
static char str[size_of_string];
extern int menu()
{
	setlocale(LC_ALL, "rus");
	printf("\n����\n");
	printf("1-�������� ��� ����� '� �� ����� 'b' � ������\n2-����������, ��������� ������ ��� ���\n");
	printf("3-����� �����, ��������������� �� ����� '�'\n4-��������� ������ �� �����\n");
	printf("5-������������� � �������������\n0-����� �� ���������\n");
	printf("��� �����?\n");
	int operation;
	scanf_s("%d", &operation);
	return operation;
}
extern void change_letters()
{
	setlocale(LC_ALL, "rus");
	printf("������� ������: ");
	getchar();
	gets_s(str);
	Aa_into_Bb(str);
	printf("���������: ");
	puts(str);
}
static void Aa_into_Bb(char* string)
{
	for (int index = 0; index < strlen(string); index++)
	{
		if (*(string + index) == 'a') *(string + index) = 'b';
		else if (*(string + index) == 'A')  *(string + index) = 'B';
	}
}
extern void define_palindrom()
{
	setlocale(LC_ALL, "rus");
	printf("������� ������: ");
	getchar();
	gets_s(str);
	palindrom(str);
	if (palindrom(str)) printf("��� ���������\n");
	else printf("��� �� ���������\n");
}
static bool palindrom(char* string)
{
	bool state = true;
	const int size = strlen(string);
	for (int i = 0; i < size; i++)
	{
		if (string[i] == ' ')
		{
			for (int j = i; j < size - 1; j++)
			{
				string[j] = string[j + 1];
			}
		}
	}
	strlwr(string);
	for (int i = 0; i < size; i++)
	{
		if (string[i] != string[size - i - 1])
			state = false; break;
	}
	return state;
}
extern void find_words()
{
	setlocale(LC_ALL, "rus");
	printf("������� ������\n");
	getchar();
	gets_s(str);
	strcat(str, " ");
	int counter = 0;
	const int size = strlen(str);
	for (int i = 0; i < size - 1; i++)
	{
		if (str[i] == 'a' && str[i + 1] == ' ')
			counter++;
	}
	printf("%d", counter);
	printf("\n");
}
extern void divide_string()
{
	setlocale(LC_ALL, "rus");
	printf("������� ������\n");
	getchar();
	gets_s(str);
	printf("��������� ����������:\n");
	words(str);
}
static void words(char* string)
{
	char razd[] = { "\., :-;!?" };
	char* ptr = strtok(string, razd);
	while (ptr != NULL)
	{
		printf("%s\n", ptr);
		ptr = strtok(NULL, razd);
	}
}
extern void print_hello()
{
	setlocale(LC_ALL, "rus");
	char final_str[size_of_string * 2] = { "������, " };
	char sign_str[2] = { "!" };
	printf("������� ���� ���\n");
	getchar();
	gets_s(str);
	strcat(final_str, str);
	strcat(final_str, sign_str);
	puts(final_str);
}
