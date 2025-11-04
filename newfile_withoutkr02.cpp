#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//int pass(int &x) ???
//{
//	int k=0, i = 0;
//	int u;
//	int sum;
//	u = x;
//	while (u != 0)
//	{
//		sum += u % 10;
//		u /= 10;
//	}
//}
//int main()
//{
//	int a[3][3] = { {1,2,3},{4,5,6},{7,8,9} }, i, j, n = 3, s = 0;
//	for (i=0;i<n;i++)
//		if (pass(a[i][n - (i + 1)]) == 1) s += a[i][n - (i + 1)];
//	cout << s;
//}

//int F(int x)
//{
//	//if (x == 1) return 1;
//	//else
//	//	if (x == 2) return 2;
//	//	else 
//			return F(x - 1) + 2 * F(x - 2);
//}
//int main()
//{
//	cout << F(10);
//}

//int a[10];
//int n;
//int kolvo(int); //прототип
//void zam(int);
//int main()
//{
//	int i;
//	n = 5;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << kolvo(0) << endl;
//	if (kolvo(0) % 2 == 0) zam(0);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}
//int kolvo(int i)
//{
//	if (i == n) return 0;
//	else
//		if (a[i] > 0) return kolvo(i + 1) + 1;
//		else return kolvo(i + 1);
//}
//void zam(int i)
//{
//	if (i != n)
//	{
//		if (a[i] < 0)
//		{
//			a[i] = a[i] * a[i];
//		}
//		zam(i + 1);
//	}
//}

//int a[10]; ???
//int n;
//int mx(int);
//int kolvo(int); //прототип
//void zam(int);
//int main()
//{
//	int i;
//	n = 5;
//	for (i = 0; i < n; i++)
//		cin >> a[i];
//	cout << kolvo(0) << endl;
//	if (kolvo(0) % 2 == 0) zam(0);
//	for (i = 0; i < n; i++)
//		cout << a[i] << " ";
//	return 0;
//}
//int mx(int i)
//{
//	if (i == n) return 0;
//	else
//		if (a[i] > mx && a[i]) return mx;
//}
//int kolvo(int i)
//{
//	if (i == n) return 0;
//	else
//		if (a[i] > 0) return kolvo(i + 1);
//		else return kolvo(i + 1)+1;
//}
//void zam(int i)
//{
//	if (i != n)
//	{
//		if (a[i] < 0)
//		{
//			a[i] = a[i] * a[i];
//		}
//		zam(i + 1);
//	}
//}

int F(int x)
{
	if (x == 1) return 2;
	else
		if (x % 3 == 0) return F(x - 1) + F(x / 3);
		else return F(x - 1);
}
void main()
{
	cout << F(28);
}