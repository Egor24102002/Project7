#define _CRT_NONSTDC_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS
#define HEADER ("Лабораторная работа №1\nВыполнили: Шмелёв Д.В., Пантюшов Е.И.\n")
#define n 5

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <string.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	printf(HEADER);
	srand(time(NULL));
	//Задание 1
	/*int arr[n] = {0,1,2,3,4,5,6,7,8,9};
	int min = INT_MAX, max = INT_MIN;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min)
		{
			min = arr[i];
		}
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("Разница между максимальным и минимальным элементов массива равна %d\n", max - min);*/
	//Задание 2
	/*int arr[n];
	printf("Массив, составленный из рандомных чисел:");
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
		printf(" %d ", arr[i]);
	}*/
	//Задание 3
	/*int size = 0;
	printf("Введите размерность массива: ");
	scanf("%d", &size);
	int* arr = (int*)malloc(size * sizeof(int));
	printf("Заполните массив:\n");
	for (int i = 0; i < size; i++)
	{
		printf("%d элемент: ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Полученный массив:");
	for (int i = 0; i < size; i++)
	{
		printf(" %d ", arr[i]);
	}
	free(arr);*/
	//Задание 4
	/*int arr[n][n];
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			arr[i][j] = rand() % 100;
			printf(" %-3d ", arr[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			sum = sum + arr[i][j];
		}
		printf("Сумма %d-ой строки равна %d\n", i + 1, sum);
		sum = 0;
	}*/
	//Задание 5//
		setvbuf(stdin, NULL, _IONBF, 0);
		setvbuf(stdout, NULL, _IONBF, 0);
		int i ;
		struct student
		{
			char famil[20];
			char name[20], facult[20];
			int Nomzach;
		} stud[3],vvod;
		
		for (i = 0; i < 3; i++)
		{
			printf("Введите фамилию студента\n"); scanf("%20s", stud[i].famil);
		}
		for (i = 0; i < 3; i++)
		{
			printf("Введите имя студента %s\n", stud[i].famil); scanf("%20s", stud[i].name);
		}
		for (i = 0; i < 3; i++)
		{
			printf("Введите название факультета студента %s %s\n", stud[i].famil, stud[i].name); scanf("%20s", stud[i].facult);
		}
		for (i = 0; i < 3; i++)
		{
			printf("Введите номер зачётной книжки студента %s %s\n", stud[i].famil, stud[i].name); scanf("%d", &stud[i].Nomzach);
		}

		for (i = 0; i < 3; i++)
		{
			printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name,
				stud[i].facult, stud[i].Nomzach);
		};
		
			printf("Введите фамилию студента\n"); scanf("%20s", vvod.famil);
	
		
			printf("Введите имя студента %s\n", vvod.famil); scanf("%20s", vvod.name);
		
		
			printf("Введите название факультета студента %s %s\n", vvod.famil, vvod.name); scanf("%20s", vvod.facult);
		
		
			printf("Введите номер зачётной книжки студента %s %s\n", vvod.famil, vvod.name); scanf("%d", &vvod.Nomzach);
			for (i = 0; i < 3; i++) {
				if (strcmp(stud[i].famil, vvod.famil) == 0) {
					if (strcmp(stud[i].name, vvod.name) == 0) {
						if (strcmp(stud[i].facult, vvod.facult) == 0) {
							if (stud[i].Nomzach == vvod.Nomzach)
								printf("Cтудент %s %s обучается на факультете %s, номер зачётной книжки %d \n", stud[i].famil, stud[i].name,
									stud[i].facult, stud[i].Nomzach);
						}
					}
				}
			}
	getch();
	return 0;
	}