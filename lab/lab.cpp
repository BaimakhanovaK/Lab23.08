// lab.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<ctime>

using namespace std;


int main()
{   //1.	Объвить две переменные и два указателя. Присвоить указателям адреса переменных. 
	//Сложить переменные, используя указатели и присвоить результат третьей переменной.
	//Вывести результат сложения на экран и адрес результата.
	
	/*int a = 100;
	int b = 200;
	int *c = &a;
	int *d = &b;

	int sum;

	sum = *c + *d;
	cout << sum << endl;
	cout << &sum <<endl;*/

	//2.	Исправить код:
	//#include <iostream> 
	//using namespace std;
	//void main()
	//{ int a = 2, b = 5;
	//  int *p1, *p2 = &b;
	//  *p1 = 10;
	//  cout << *p1 - *p2; }

	/*int a = 2, b = 5;
	int *p1=&a, *p2 = &b;
	*p1 = 10;
	cout << *p1-*p2 << endl;*/

	//3.	Исправить код:
    //#include <iostream> 
	//using namespace std;
	//void main()
	//{
		//double a = 2.5, b = 5.2, res;
		//int *p1 = a, p2 = b;
		//res = *p1 - p2;
		//cout << res;
	//}

	/*double a = 2.5, b = 5.2, res;
	double *p1 = &a, *p2 = &b;
	res = *p1 - *p2;
	cout << res<<endl;*/

	//4.	Исправить код:
    //#include <iostream>
	//using namespace std;
	//void main()
	//{
		//const int SIZE = 10;
		//int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		//int *p = A;
		//for (int i = 0; i<SIZE; i++) //выполнить вывод массива используя указатели
			//cout << *A++;
	//}

		//const int SIZE = 10;
		//int A[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };
		//int *p = A;
		//for (p=A; p < A+10; p++) //выполнить вывод массива используя указатели
		//	cout << *p <<" "<<endl;

	//5.	Используя указатели заполнить массив случайными числами и вывести его на экран.

	/*int a[10];
	int *p = a;
	for (p = a; p < a + 10; p++)
	{
		*p = 1 + rand() % 100;
		cout << *p << " " << endl;
	}*/

	//6.Дано натуральное число N и массив целых чисел. Используя указатели, выяснить имеется ли в массиве хотя 
	//бы одно нечетное отрицательное число и определить его местонахождение в массиве.

	/*int a[10];
	int *p = a;

	for (p = a; p < a + 10; p++)
	{
		*p = -10 + rand() % 10;
		cout << *p << " " << endl;
	}
	for (p = a; p < a + 10; p++)
	{
		if (*p < 0 && *p % 2!= 0)
		{
			cout << p - a << endl;
		}
		else;
	}*/

	//7.Даны действительные числа а1,..a16. Используя указатели получить min(a1*a9,a2*a10,...,a8*a16).
	/*int a[16];
	int *p = a;
	int min = INT_MAX;
	for (p = a; p < a + 16; p++)
	{
		*p = 1 + rand() % 10;
		cout << *p << " " << endl;
	}
	for (p = a; p < a + 16/2; p++)
	{
		if (*p*(*(p + 8)) < min)
		{
			min = *p*(*(p + 8));
		}
		else;
	}
	cout <<"minimum = "<< min << endl;*/

	//8.Дана последовательность a1,a2,...,a20. Используя указатели расположить 
	//положительные элементы последовательности, стоящие на нечетных местах по возрастанию.
	int a[20] = { 1,1,2,3,5,3,4,8,12,22,33,44,5,6,8,1,2,4,6,8 };
	int *p = a;

	for (p = a; p < a + 20; p++)
		cout << *p << " ";
	cout << endl;

	for (int pass = 1; pass < 20; pass++)
		for (p = a + 1; p < a + 19; p += 2)
		{
			if (*p > *(p + 2)) swap(*p, *(p + 2));
		}

	for (p = a; p < a + 20; p++)
		cout << *p << " ";
	cout << endl;


	system("pause");
    return 0;
}

