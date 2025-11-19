#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//void main() {
//	setlocale(LC_ALL, "Russian");
//	int x[100];
//	int n, sum = 0;
//	cin >> n;
//	int maxotr = -2147483647;
//	for (int i = 0; i < n; i++) {
//		cin >> *(x + i);
//	}
//	for (int i = 0; i < n; i++) {
//		if (*(x + i) < 0) {
//			if (*(x + i) > maxotr)
//				maxotr = *(x + i);
//			sum += *(x + i);
//		}
//	}
//	if (maxotr != -2147483647)
//		cout << endl << "Максимальное отрицательное число: " << maxotr;
//	else cout << endl << "Нет отрицательных";
//	cout << endl << "Сумма отрицательных чисел : " << sum << endl;
//	cout << "Положительные эл-ты массива : ";
//	for (int i = 0; i < n; i++) {
//		if (*(x + i) > 0)
//			cout << x[i] << " ";
//	}
//	cout << endl;
//}

//void main() {
//	setlocale(LC_ALL, "Russian");
//	int n, sum = 0;
//	cin >> n;
//	int* x = new int[n];
//	int maxotr = -2147483647;
//	for (int i = 0; i < n; i++) {
//		cin >> *(x + i);
//	}
//	for (int i = 0; i < n; i++) {
//		if (*(x + i) < 0) {
//			if (*(x + i) > maxotr)
//				maxotr = *(x + i);
//			sum += *(x + i);
//		}
//	}
//	if (maxotr != -2147483647)
//		cout << endl << "Максимальное отрицательное число: " << maxotr;
//	else cout << endl << "Нет отрицательных";
//	cout << endl << "Сумма отрицательных чисел : " << sum << endl;
//	cout << "Положительные эл-ты массива : ";
//	for (int i = 0; i < n; i++) {
//		if (*(x + i) > 0)
//			cout << *(x + i) << " ";
//	}
//	cout << endl;
//	delete[] x;
//}

//int form(int a[100]) // заполнение массива
//{
//	int n;
//	cout << "\nEnter n";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		a[i] = rand() % 100;
//	return n;
//}
//void print(int a[100], int n) // вывод массива
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << "\n";
//}
//void Dell(int a[100], int& n) // удаление четных элементов
//{
//	int j = 0, i, b[100];
//	for (i = 0; i < n; i++)
//		if (a[i] % 2 != 0)
//		{
//			b[j] = a[i]; j++;
//		}
//	n = j;
//	for (i = 0; i < n; i++)a[i] = b[i];
//}
//void main()
//{
//	int a[100];
//	int n;
//	n = form(a);
//	print(a, n);
//	Dell(a, n);
//	print(a, n);
//}

//niz nomer 4 str 41 DODELAT
//int form(int a[100]) // заполнение массива
//{
//	int n;
//	cout << "\nEnter n";
//	cin >> n;
//	for (int i = 0; i < n; i++)
//		a[i] = rand() % 100;
//	return n;
//}
//void print(int a[100], int n) // вывод массива
//{
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " ";
//	cout << "\n";
//}
//bool checksort(int* x, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (x[i] < x[i + 1])
//			return 1;
//		else
//			return 0;
//	}
//}
//bool nullone(int z)
//{
//	if (z <= 0)
//	{
//		z = abs(z);
//		while (z > 0)
//		{
//			int xa = z & 10;
//			if (z == 1 || z == 0)
//			{
//				return 0;
//			}
//			z /= 10;
//		}
//		return 1;
//	}
//}
//void main() {
//	setlocale(LC_ALL, "Russian");
//	int x[100];
//	int n=100, sum = 0;
//	int y;
//	cin >> n;
//	int maxotr = -2147483647;
//	for (int i = 0; i < n; i++) {
//		cin >> *(x + i);
//	}
//	for (int i = 0; i < n; i++) {
//		if (*(x + i) < 0) {
//			if (*(x + i) > maxotr)
//				maxotr = *(x + i);
//			sum += *(x + i);
//		}
//	}
//	if (maxotr != -2147483647)
//		cout << endl << "Максимальное отрицательное число: " << maxotr;
//	else cout << endl << "Нет отрицательных";
//	cout << endl << "Сумма отрицательных чисел : " << sum << endl;
//	cout << "Положительные эл-ты массива : ";
//	for (int i = 0; i < n; i++) {
//		if (*(x + i) > 0)
//			cout << *(x + i) << " ";
//	}
//	cout << endl;
//}
