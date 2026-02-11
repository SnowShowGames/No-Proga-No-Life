#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

//СПИСКИ

struct List {
	int data;
	List* next;
};

//создание нового узла.элемента списка

List* createList(int value)
{
	List* newL = new List; //новый узел
	newL->data = value; //занесли данные в список
	newL->next = NULL; //указывает на 0, тюк след. элемента нет
	return newL; //возвращает указатель на новый лист
}

//функция распечатки
void PrintList(List* head) //вывод списка в консоль / на экран
{
	while (head != nullptr) //NULL
	{
		cout << head->data << " ";
		head = head->next;
	}
}

//добавление эл.списка в конец

void appEnd(List*& head, int value)
{
	List* newL = createList(value); //новый эл. списка
	if (head == nullptr)
	{
		head = newL;
	}
	else {
		List* tmp = head;
		while (tmp->next != nullptr)
		{
			tmp = tmp->next;
			tmp->next = newL;
		}
	}
}

//сумма элементов списка, не дописано

int SumList(List* head)
{
	int sm=0;
	List* tmp = head;
	while (tmp != nullptr)
	{
		sm+=
	}
}

//функция удаления элементов из списка
void removeElem(List* head, int value)
{
	if (head == nullptr)
	{
		cout << "Список пуст" << endl;
		return;
	}
	if (head->data == value)
	{
		List* tmp = head; //копия списка в tmp
		head = head->next;
		delete tmp; return;
	}
	//поиск элемента для удаления
	List* tmp = head;
	while (tmp->next != nullptr)
	{
		tmp = tmp->next;
	}
	//если элемент не найден, тогда
	if (tmp->next = nullptr)
	{
		cout << "Элемент не найден!" << endl; return;
	}
	List* delElem = tmp->next;
	tmp->next = tmp->next->next;
	delete delElem;
}

/*
*removeElem(head, 3);
* printList(head)
*/

int main()
{
	int x;
	setlocale(LC_ALL, "Rus");
	List* head = nullptr;
	int n; cout << "Введите размер списка " << endl;;
	cin >> n; cout << "Введие элемент списка" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x;
		appEnd(head, x); //добавление в конец списка
	}
	cout << "полученный список" << endl;
	PrintList(head);
}
