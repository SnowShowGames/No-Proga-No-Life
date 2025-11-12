#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	const int n = 7;
//	int k[n][n];
//	int a1 = 0;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			//if ((i < n / 2)-1 && j >= n / 2 && j >= n - i - 1 && j >= i && i >= n - j - 1)
//			//if (i < n / 2 && j >= n / 2 && i >= n - j - 1)
//			if (((i < n / 2) + 1 && j >= n / 2 && j >= n - i - 1 && j >= i) || ((i >= n / 2) && (j <= n / 2) + 1 && (j <= n - i - 1) && (j >= i) + 1))
//			{
//				cout << "0" << " ";
//			}
//			else
//			{
//				k[i][j] = char(0xFF);
//				cout << char(0xFF) << " ";
//			}
//		}
//		cout << endl;
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	const int n = 3;
//	int a[n][n] = {
//		{1,2,3},
//		{4,5,6},
//		{7,8,9}
//	};
//	int s, k;
//	s = 0;
//	bool f = 1;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			for (k = 2; k < a[i][j]; k++)
//			{
//				if (a[i][j] % k == 0) f = 0;
//			}
//			if (i < j && f == 1) s += a[i][j];
//		}
//		cout << s;
//	}
//}

//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	const int n = 3;
//	int a[n][n] = {
//		{1,2,1111},
//		{4,5,6},
//		{71,8,9}
//	};
//	int s, k, x;
//	s = 1;
//	int f;
//	for (int i = 0; i < n; i++)
//	{
//		f = 0; x = a[i][n - (i + 1)];
//		while (x != 0)
//		{
//			if (x % 10 == 1) f++;
//			x = x / 10;
//		}
//		if (f > 1) s *= a[i][n - (i + 1)];
//	}
//	cout << s;
//}

//int main()
//{
//	int a[3][3] = {
//		{1,-2,3},
//		{-4,-5,6},
//		{7,8,9}
//	};
//	int max, p, k;
//	max = 0; p = 0;
//	for (int j = 0; j < 3; j++)
//	{
//		k = 0;
//		for (int i = 0; i < 3; i++)
//		{
//			if (a[i][j] > 0) k++;
//		}
//		if (k > max) {
//			cout << j;
//		}
//	}
//	//cout << max << " " << p;
//}

int main()
{
	setlocale(LC_ALL, "Rus");
	int b[3];
		int a[3][3] = {
		{1,-2,3},
		{-4,-5,6},
		{7,8,9}
	};
	int i, j, max, p, k=0, m=3;
	bool f = 0;
	for (i = 0; i < 3; i++)
	{
		b[i] = a[i][0];
		for (j = 0; j < 3; j++)
		{
			if (a[i][j] > b[j]) b[i] = a[i][j]; k++; f = 1;
		}
	}
	for (i = 1; i < 4; i++) {
		//cout << b[i];
		if (f == 1) {
			cout << "\n" << "Yes\n" << "Строка " << i << " упорядочена" << endl;
		}
		else
		{
			cout << "\n" << "No\n" << "Строка " << i << " не упорядочена" << endl;
		}
	}
}