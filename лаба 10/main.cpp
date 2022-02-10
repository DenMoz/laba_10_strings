#include<stdio.h>
#include<locale.h>
#include"header.h"
int main()
{
	setlocale(LC_ALL, "rus");
	printf("Работа со строками\n");
	while (true)
	{
		printf("Выберите операцию");
		switch (menu())
		{
		case 1: change_letters(); break;
		case 2: define_palindrom(); break;
		case 3: find_words(); break;
		case 4: divide_string(); break;
		case 5: print_hello(); break;
		case 0: return 0; break;
		default: puts("Неверное значение"); break;
		}
	}
	return 0;
}