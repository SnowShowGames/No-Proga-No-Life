#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//nomer 4 str 27

//int twoos(int n) // Функция для проверки, является ли число двузначным и положительным
//{
//	int sr = 0;
//	if (n > 0 && n >= 10)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//void lasttwoos(int &n) // Функция для обмена двух последних цифр числа
//{
//	int lnum = n % 10; // последняя цифра
//	int slnum = (n / 10) % 10; // предпоследняя цифра
//	n = (n / 100) * 100 + lnum * 10 + slnum; // Убираем две последние цифры и добавляем новые в обратном порядке
//}
//int mass1(int arr[5], int n) // Функция для обработки массива (передача по ссылке)
//{
//	int mx = arr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (arr[i] > mx)
//		{
//			mx = arr[i];
//		}
//	}
//	return mx;
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int arr[5] = { 123,456,789,654,321 };
//	int n = 5;
//
//	int mx = mass1(arr, n);
//
//	cout << mx << endl;
//}

//nomer 5 str28

//int prv(int n)
//{
//		if (n % 2 == 0) return 1;
//		else if (n == 9) return 0;
//		else  return n+1;	
//}
//void numort(int& n)
//{
//	if (n <= 0) return;
//		int rl = 0, mnz = 1;
//		int y = n;
//		while (y > 0)
//		{
//			int ns = y % 10;
//			int nwn = prv(ns);
//			rl = rl + nwn * mnz;
//			mnz *= 10;
//			y = y / 10;
//		}
//		n = rl;
//}
//void prmtx(int a[3][3], int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] > 0) numort(a[i][j]);
//		}
//	}
//}
//int prln1(int a[3][3], int n) //NAIBOLSHIY ELEMENT V MASSIVE
//{
//	int mx = a[0][0];
//	int mxstr = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] > mx)
//			{
//				mx = a[i][j];
//				mxstr = i;
//			}
//		}
//	}
//	return mxstr;
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a[3][3] = { {123, -5, 789}, {456, 12, -3}, {789, 246, 135} };
//	int  n = 3;
//
//	cout << "Исходная матрица:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//
//	prmtx(a, n);
//
//	cout << "Преобразованная матрица:" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout << a[i][j] << " ";
//		}
//		cout << endl;
//	}
//	
//	int mx = prln1(a,n);
//	cout << "Номер строки с наибольшим элементом: " << mx << endl;
//}

//nomer 1 str 29

//int F(int n)
//{
//		if (n > 1)
//		{
//			return F(n - 1) + F(n - 2);
//		}
//}
//void main()
//{
//	cout << F(7) << endl;
//}

//nomer 3 str 29-30

//int F(int x)
//{
//	if (x == 0) return 1;
//	if (x == 1) return 2;
//	else if (x % 3 == 0) return F(x - 1) + F(x % 3);
//	else return F(x - 1);
//
//}
//void main()
//{
//	cout << F(28) << endl;
//}

//nomer 2 str31

//int prln1(int a[3], int n) //NAIMENSHIY ELEMENT V MASSIVE I EGO KOL-VO
//{
//	if (n == 0) return 0;
//	int mn = a[0];
//	int k = 0;
//
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < mn)
//		{
//			mn = a[i];
//			k = 1;
//		}
//		else if (a[i] == mn)
//		{
//			k++;
//		}
//	}
//	return k;
//}
//int minimunarr(int a1[], int n1, int a2[], int n2)
//{
//	return prln1(a1, n1) + prln1(a2, n2);
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//	int a1[4] = { 1,2,3,4 };
//	int a2[4] = { 5,6,7,8 };
//	int n = 4;
//
//	cout << "Массив A" << "\n" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << a1[i] << endl;
//	}
//
//	cout << "Массив B" << "\n" << endl;
//	for (int j = 0; j < n; j++)
//	{
//		cout << a2[j] << endl;
//	}
//
//	cout << "\n" << endl;
//
//	int mintwnarr=minimunarr(a1, n, a2, n);
//	cout << mintwnarr << endl;
//}
