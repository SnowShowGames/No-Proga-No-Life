#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

//struct PLANE
//{
//    char name[10];
//    int number;
//    int time;
//};
//
//void Vvod(struct PLANE* b, int& n)
//{
//    n = 3;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i].name;
//        cin >> b[i].number;
//        cin >> b[i].time;
//    }
//}
//
//void print(struct PLANE* b, int& n)
//{
//    for (int i = 0; i < n; i++)
//    {
//        cout << i << " " << b[i].name << " " << b[i].number << " " << b[i].time << endl;
//    }
//    cout << "\n";
//}
//
//void sortPlanes(PLANE* b, int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (b[j].number < b[j + 1].number)
//            {
//                PLANE temp = b[j];
//                b[j] = b[j + 1];
//                b[j + 1] = temp;
//            }
//        }
//    }
//}
//
//bool checksort(PLANE* b, int n)
//{
//    for (int i = 0; i < n - 1; i++)
//    {
//        if (b[i].number > b[i + 1].number)
//            return false;
//    }
//    return true;
//}
//
//void act1(PLANE* b, int& n)
//{
//    double avgtime = (b[0].time + b[1].time + b[2].time) / (double)n;
//    bool rflag = false;
//
//    for (int i = 0; i < n; i++)
//    {
//        if (b[i].time > avgtime + 1)
//        {
//            if (b[i].number % 10 != 1 && b[i].number % 10 != 3)
//            {
//                cout << " " << b[i].name << " " << b[i].number << " " << b[i].time << endl;
//                rflag = true;
//            }
//        }
//    }
//
//    if (!rflag)
//    {
//        cout << "Рейсы не найдены" << endl;
//    }
//
//    cout << "\n";
//    cout << "Среднее время " << avgtime << " ч" << endl;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "Rus");
//    PLANE* b = new PLANE[3];
//    b[0] = { "Moscow", 534, 7 };
//    b[1] = { "Krasnodar", 123, 5 };
//    b[2] = { "Samara", 321, 6 };
//    int n = 3;
//
//    cout << "Все рейсы:" << endl;
//    print(b, n);
//
//    if (!checksort(b, n))
//    {
//        cout << "Выполняю сортировку..." << endl;
//        sortPlanes(b, n);
//    }
//    else
//    {
//        cout << "Массив отсортирован" << endl;
//    }
//
//    cout << "Рейсы после сортировки по возрастанию номера:" << endl;
//    print(b, n);
//
//    act1(b, n);
//
//    delete[] b;
//    return 0;
//}


//ввести название рейса и вывести все рейсы с этмм же названием
struct PLANE
{
    char name[15];
    int number;
    int time;
};

void Vvod(struct PLANE* b, int& n)
{
    n = 10;
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

void findPlane(PLANE* b, int n)
{
    string pname;
    cout << "Введите пункт назначения" << endl;
    cin >> pname;
    for (int i = 0; i < n; i++)
    {
       
        if (b[i].name == pname)
        { cout << "!!!";
            for (int j = 0; j < n;j++) print(b, j);
         
        }
    }
}

void act1(PLANE* b, int& n)
{
    double avgtime = (b[0].time + b[1].time + b[2].time) / (double)n;
    bool rflag = false;

    for (int i = 0; i < n; i++)
    {
        if (b[i].time > avgtime + 1)
        {
            if (b[i].number % 10 != 1 && b[i].number % 10 != 3)
            {
                cout << " " << b[i].name << " " << b[i].number << " " << b[i].time << endl;
                rflag = true;
            }
        }
    }

    if (!rflag)
    {
        cout << "Рейсы не найдены" << endl;
    }

    cout << "\n";
    cout << "Среднее время " << avgtime << " ч" << endl;
}

int main()
{
    //PLANE b;
    //cin >>b.name;
    setlocale(LC_ALL, "Rus");
    PLANE* b = new PLANE[10];
    b[0] = { "Moscow", 534, 7 };
    b[1] = { "Краснодар", 123, 5 };
    b[2] = { "Самара", 321, 6 };
    b[3] = { "Новосибирск", 971, 6 };
    b[4] = { "Moscow", 701, 12 };
    b[5] = { "Краснодар", 123, 1 };
    b[6] = { "Самара", 321, 3 };
    b[7] = { "Новосибирск", 971, 2 };
    b[8] = { "Новосибирск", 710, 12 };
    b[9] = { "Самара", 100, 9 };
    int n = 10;

    cout << "Все рейсы:" << endl;
    print(b, n);

    findPlane(b, n);

    //if (!checksort(b, n))
    //{
    //    cout << "Выполняю сортировку..." << endl;
    //    sortPlanes(b, n);
    //}
    //else
    //{
    //    cout << "Массив отсортирован" << endl;
    //}

    //cout << "Рейсы после сортировки по возрастанию номера:" << endl;
    //print(b, n);

    //act1(b, n);

    delete[] b;
    return 0;
}

//написать фун-ю которая выведет в консоль все рейсы с минимальным временем в пути (по каждому пункту назначения)

void findMinTime(PLANE* b, int n)
{

}
