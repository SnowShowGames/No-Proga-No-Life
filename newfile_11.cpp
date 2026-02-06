#include <iostream>
#include <cmath>
#include <clocale>

using namespace std;

struct STEC {
    int data;
    STEC* next;
};

STEC* create() {
    return NULL;
}

bool IsEmpty(STEC* top) {
    return (top == NULL);
}

void Push(STEC*& top, int x) { //добавляет данные в стек
    STEC* p = new STEC;
    p->data = x;
    p->next = top;
    top = p;
}

void Print(STEC*& top) {
    if (!IsEmpty(top)) {
        cout << top->data << ", ";
    }
}

int MaxElemStck(STEC* top)
{
    int p = top->data;
    if (!IsEmpty(top))
    {
        return ;
    }
}

int StackSize(STEC* top)
{
    int size = 0;
    while (top != NULL)
    {
        size++;
        top = top->next;
    }
    return size;
}

int main() {
    setlocale(LC_ALL, "Rus");
    srand(time(0));
    int n = 3;
    STEC* s = create();
    STEC* s1 = create();
    cout << "Стекъ: " << endl;
    for (int i = 0; i < n; i++) {
        int x = rand() % 10;
        Push(s, x);
        Push(s1, x);
        Print(s);
        Print(s1);
    }
    return(0);
}

//найти максимальны элемент стека, написать функцию

//найти сумму элементов 2-ух стеков

//на основе рекурсии, найти сумму элементов 2-ух стеков



/*
stack *s=NULL;
stack *s1=new stack[5];
*/

/*
//? данных
int Pop (stack *&top)
{
if (!IsEmpty(top))
{
int k=top->data; //data получаем элемент стека
top=top->next;
return k;
}
return NULL;
}

//извлечение данных с удалением
int PopDel(stack *&top)
{
if (!IsEmpty(top))
{
stack *p=top; //новый указатель на стек
int k=p->data //читаем данные
top=top->next //двигаем указатель на след. элемент
delete p; //удаляем элемент из p
return k;
}
return NAN;
}

//размер стека
int StackSize(stack *top)
{
int size=0;
while (top!=NULL)
{
size++;
top=top->next;
}
return size;
}
*/

/*
struct stack
{
int data;
stack *next;
}
*/

/*
//рекурсивное определение размера стека 1 вариант
int StackSizeRecurs(stack *top)
{
int size=1;
if (IsEmpty(top))
{
return 0; //размер ноль
//рекрсивно вызывает эту же функцию
}
return size+StackSizeRecurs(top->next);
}

//рекурсивное определение размера стека 1 вариант
int StackSizeRecurs2(stack *top, int size)
{
if (IsEmpty(top)) return 0;
return  1+StackSizeRecurs2(top->next,size);
}
*/