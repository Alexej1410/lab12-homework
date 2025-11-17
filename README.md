<h1>Домашнее задание к лабораторной №12</h1>
<h2>Выполнил: Краченко А.С.</h2>

<h1>Вариант 2</h1>
<h2>Условие задачи</h2>
Напишите программу, которая вычисляет размер типа данных short int в байтах.

<h2>Алгоритм</h2>

```
1. Начало.
2. Инициализируем массив short_arr[2];
3. printf("размер типа данных short int в байтах: %ld\n", (char*)(&short_arr[1]) - (char*)(&short_arr[0]));
4. Возвращаем 0;
5. Конец.
```

<h2>Код программы</h2>

```
#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	short int short_arr[2];
	printf("размер типа данных short int в байтах: %ld\n", (char*)(&short_arr[1]) - (char*)(&short_arr[0]));
	return 0;
}
```

<h2>Схема</h2>
<img width="321" height="418" alt="image" src="https://github.com/user-attachments/assets/23e532f3-674f-4955-be0f-479092c93c73" />

<h2>Консоль</h2>
<img width="568" height="104" alt="image" src="https://github.com/user-attachments/assets/b473a19c-9511-4fcd-a0d5-e032c877575c" />

