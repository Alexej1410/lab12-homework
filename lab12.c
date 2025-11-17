#include <stdio.h>
#include <locale.h>

void main()
{
	setlocale(LC_ALL, "RUS");
	task5();
}

int task1()
{
	int* pi, i = 5;
	float* pf, f = 2.1f;
	printf("%lu\n", sizeof(pi));
	printf("%lu\n", sizeof(pf));
}

int task2()
{
	float PI = 3.14159, * p1, * p2;
	p1 = p2 = &PI;
	printf("по адресу р1=%p хранится *р1=%g\n", p1, *p1);
	printf("по адресу р2=%p хранится *р2=%g\n", p2, *p2);
}

int task3()
{
	int *pa, x = 5;
	pa = &x;
	printf("по адресу %p хранится *ptr=%g\n", pa, *pa);
	pa++;
	printf("по адресу %p хранятся *ptr=%g\n", pa, *pa);
	pa--;
	printf("по адресу %p хранятся *ptr=%g\n", pa, *pa);
	puts("");
	double *pa1, x1 = 5;
	pa1 = &x1;
	printf("по адресу %p хранится *ptr=%g\n", pa1, *pa1);
	pa1++;
	printf("по адресу %p хранятся *ptr=%g\n", pa1, *pa1);
	pa1--;
	printf("по адресу %p хранятся *ptr=%g\n", pa1, *pa1);
	puts("");
	char *pa2, x2 = 5;
	pa2 = &x2;
	printf("по адресу %p хранится *ptr=%g\n", pa2, *pa2);
	pa2++;
	printf("по адресу %p хранятся *ptr=%g\n", pa2, *pa2);
	pa2--;
	printf("по адресу %p хранятся *ptr=%g\n", pa2, *pa2);
	puts("");
	long double *pa3, x3 = 5;
	pa3 = &x3;
	printf("по адресу %p хранится *ptr=%g\n", pa3, *pa3);
	pa3++;
	printf("по адресу %p хранятся *ptr=%g\n", pa3, *pa3);
	pa3--;
	printf("по адресу %p хранятся *ptr=%g\n", pa3, *pa3);
	puts("");
	short unsigned int *pa4, x4 = 5;
	pa4 = &x4;
	printf("по адресу %p хранится *ptr=%g\n", pa4, *pa4);
	pa4++;
	printf("по адресу %p хранятся *ptr=%g\n", pa4, *pa4);
	pa4--;
	printf("по адресу %p хранятся *ptr=%g\n", pa4, *pa4);
	puts("");
	_Bool *pa5, x5 = 5;
	pa5 = &x5;
	printf("по адресу %p хранится *ptr=%g\n", pa5, *pa5);
	pa5++;
	printf("по адресу %p хранятся *ptr=%g\n", pa5, *pa5);
	pa5--;
	printf("по адресу %p хранятся *ptr=%g\n", pa5, *pa5);
}

int task4()
{
	float array[10] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1 };
	float* ptr_a, *ptr1_a;
	printf("%p, %p, %p\n", array, &array[0], &array);
	ptr_a = &array[0];
	ptr1_a = &array[9];
	printf("значение указателя %p и значение %f\n", ptr_a, *ptr_a);
	printf("значение указателя %p и значение %f\n", ptr_a++, *(ptr_a++));
	printf("значение указателя %p и значение %f\n", ptr_a + 4, *(ptr_a + 4));
	printf("значение указателя %p и значение %f\n", ptr_a - 2, *(ptr_a - 2));
	ptr_a = &array;
	ptr1_a = &array[9];
	for (int i = 0; i < 10; i++)
	{
		printf("%.1f\n", *ptr_a);
		ptr_a++;
	}
	puts("");
	for (int j = 9; j >= 0; j--)
	{
		printf("%.1f\n", *ptr1_a);
		ptr1_a--;
	}
}

int task5()
{
	int x = 0x12345678;
	int* ptr;
	unsigned char* a1, * a2, * a3, * a4;
	unsigned char* a;
	ptr = &x;
	a = (unsigned char*)ptr;
	a1 = a + 3;
	a2 = a + 2;
	a3 = a + 1;
	a4 = a;
	printf("%.2x\n%.2x\n%.2x\n%.2x\n", *a1, *a2, *a3, *a4);
}