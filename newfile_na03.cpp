#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

struct PLANE
{
	char name[10];
	int number;
	int time;
};
void Vvod(struct PLANE *b, int &n)
{
	n=3;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i].name;
		cin >> b[i].number;
		cin >> b[i].time;
	}
}
void print(struct PLANE* b, int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << i << " " << b[i].name << " " << b[i].number << " " << b[i].time << endl;
	}
	cout << "\n";
}
void act1(PLANE* b, int& n)
{
	double avgtime = (b[0].time + b[1].time + b[2].time) / (double)n;
	int tsh = 0;
	bool rflag = 0;

	for (int i = 0; i < n; i++)
	{
		if (b[i].time > avgtime + 1)
		{
			if (b[i].number % 10 != 1 && b[i].number % 10 != 3)
			{
				cout << " " << b[i].name << " " << b[i].number << " " << b[i].time << endl;
				rflag = 1;
			}
			if (rflag == 0)
			{
				cout << "Рейсы не найдены" << endl;
			}
		}
	}
	cout << "\n";
	cout << "Среднее время " << avgtime << " ч" << endl;
}
void main()
{ 
	setlocale(LC_ALL, "Rus");
	PLANE* b = new PLANE[3];
	b[0] = {"Moscow",123,3};
	b[1] = {"Krasnodar",321,5};
	b[2] = {"Samara",534,6};
	int n = 3;
	cout << "Все рейсы" << endl;
	print(b, n);
	act1(b, n);

	delete[] b;
}
