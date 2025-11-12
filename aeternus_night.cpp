#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

//struct AZS
//{
//    char comp[4];
//    int Marca;
//    int Praic;
//};
//void serchAZS(AZS mas[], int size, int mnN[3])
//{
//    int mn = 5000;
//    int mn92 = mn, mn95 = mn, mn98 = mn;
//
//    for (int i = 0; i < size; i++) {
//        switch (mas[i].Marca) {
//        case 92: if (mas[i].Praic < mn92) mn92 = mas[i].Praic; break;
//        case 95: if (mas[i].Praic < mn95) mn95 = mas[i].Praic; break;
//        case 98: if (mas[i].Praic < mn98) mn98 = mas[i].Praic; break;
//        }
//    }
//
//    mnN[0] = mn92;
//    mnN[1] = mn95;
//    mnN[2] = mn98;
//}
//void main() {
//    AZS mas[9] = {
//        {"AZ1",92,1000},{"AZ2",92,980},{"AZ3",92,1250},
//        {"AZ1",95,1500},{"AZ2",95,1800},{"AZ3",95,1750},
//        {"AZ1",98,690},{"AZ2",98,700},{"AZ3",98,640}
//    };
//
//    int mnN[3];
//    serchAZS(mas, 9, mnN);
//    cout << "92: " << mnN[0] << "\n";
//    cout << "95: " << mnN[1] << "\n";
//    cout << "98: " << mnN[2] << "\n";
//}

struct AZS
{
	char comp[4];
	int mark;
	int price;
};
void VvodAZS(AZS b[], int& n)
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b[i].comp;
		cin >> b[i].mark;
		cin >> b[i].price;
	}
}
void searchAZS(AZS b[], int n, int mnun[3])
{
	int mn92 = 10000;
	int mn95 = 10000;
	int mn98 = 10000;

	for (int i = 0; i < n; i++)
	{
		if (b[i].mark == 92)
		{
			if (b[i].price < mn92)
			{
				mn92 = b[i].price;
			}
		}
		if (b[i].mark == 95)
		{
			if (b[i].price < mn95)
			{
				mn95 = b[i].price;
			}
		}
		if (b[i].mark == 98)
		{
			if (b[i].price < mn98)
			{
				mn98 = b[i].price;
			}
		}
	}

	if (mn92 == 10000) mn92 = 0;
	if (mn95 == 10000) mn95 = 0;
	if (mn98 == 10000) mn98 = 0;

	mnun[0] = mn92;
	mnun[1] = mn95;
	mnun[2] = mn98;
}
int main()
{
	//AZS b[3] = { {"AZ1",92,1000}, {"AZ2",95,2000}, {"AZ3",98,3000} };
	AZS b[9] = { {"AZ1",92,1000},{"AZ2",92,980},{"AZ3",92,1250},
		{"AZ1",95,1500},{"AZ2",95,1800},{"AZ3",95,1750},
		{"AZ1",98,690},{"AZ2",98,700},{"AZ3",98,640} };
	int n = 9;
	int fb[3];

	searchAZS(b, n, fb);
	cout << "92:" << fb[0] << "\n";
	cout << "95:" << fb[1] << "\n";
	cout << "98:" << fb[2] << "\n";
}