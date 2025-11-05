#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;


// NOMER 1 STRANIZA 31

//int mass1(int a[3], int n) //UPORYADOCHENNOST, PROVERKA PO VOZRASTANIU
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < a[i - 1]) return 0;
//		else
//			return 1;
//	}
//}
//double mass2(int a[3], int n) //SREDNEE ARIFMETICHESKOE
//{
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += a[i];
//	}
//	return sum / n;
//}
//void mass3(int a[3], int n, int m) //CHETNIE I YTCHETNIE, MODIFICIRUEM MASSIV
//{
//	float sr = mass2(a, n);
//	if (m == 0)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] % 2 == 0)
//			{
//				a[i] += sr;
//			}
//		}
//	}
//	else if (m == 1)
//	{
//		for (int i = 0; i < n; i++)
//		{
//			if (a[i] % 2 != 0)
//			{
//				a[i] += sr;
//			}
//		}
//	}
//}
//int main() //FINAL VIVOD DANNIH
//{
//	setlocale(LC_ALL, "Rus");
//
//	int a[3] = { 1,2,3 };
//	int b[3] = { 8,1,6 };
//	int n = 3;
//	
//	cout << "Массив A" << "\n" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << a[i] << endl;
//	}
//	cout << "Массив B" << "\n" << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << b[i] << endl;
//	}
//	if (mass1(a, n) + mass1(b, n) == 2)
//	{
//		mass3(a, n, 0);
//		mass3(b, n, 0);
//	}
//	cout << "Итоговый массив A" << "\n" << endl;
//	for (int i = 0; i < n; i++)
//		cout << a[i] << " " << endl;
//
//	cout << "Итоговый массив B" << "\n" << endl;
//	for (int i = 0; i < n; i++)
//		cout << b[i] << " " << endl;
//}

//NOMER 4 STRANIZA 31

//int prln1(int a[3], int n) //NAIBOLSHIY ELEMENT V MASSIVE
//{
//	int mx = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] > mx)
//		{
//			mx = a[i];
//		}
//	}
//	return mx;
//}
//int main()
//{
//	setlocale(LC_ALL, "Rus");
//
//	int a[3] = { 5,9,1 };
//	int b[3] = { 7,14,2 };
//	int c[3] = { 3,6,12 };
//	int n = 3;
//
//	int maximumarr[3];
//
//	maximumarr[0] = prln1(a, n);
//	maximumarr[1] = prln1(b, n);
//	maximumarr[2] = prln1(c, n);
//
//	int mininmax = maximumarr[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (maximumarr[i] < mininmax)
//		{
//			mininmax = maximumarr[i];
//		}
//	}
//
//	cout << "Наименьший элемент " << mininmax << endl;
//
//}



//ETO NA VSYAKIY SLUCHAI

	//for (int i = 0; i < n; i++)
	//{
	//	cout << a[i] << " " << endl;
	//}
	//cout << "\n" << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << b[i] << " " << endl;
	//}
	//cout << "\n" << endl;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << c[i] << " " << endl;
	//}
	//cout << "\n" << endl;

// NA BUDUSHEE !!! POKA ETO NE NUZHNO!!!

//int prln1(int a[3], int n) //NAIMENSHIY ELEMENT V MASSIVE 
//{
//	int mn = a[0];
//	for (int i = 0; i < n; i++)
//	{
//		if (a[i] < mn)
//		{
//			mn = a[i];
//		}
//	}
//	return mn;
//}