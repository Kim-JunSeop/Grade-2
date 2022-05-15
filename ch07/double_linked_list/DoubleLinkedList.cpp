#include <iostream>
#include "DoubleLinkedList.h"

using namespace std;

DLinkedList::DLinkedList(void)
{
    Head = NULL;
    Tail = NULL;
}

DLinkedList::~DLinkedList(void)
{
    RemoveAll();
}
void DLinkedList::Add(int Item)
{
    NODE * temp = new NODE;

    temp -> Date = Item;
    temp->Prev = NULL;
    temp->Next = NULL;

    if (Head == NULL)
    {
        Head = temp;
        Tail = temp;
    }
    else
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }
}

void DLinkedList::Remove(int Item)
{
    if (Head == NULL)
    {
        cout << "��� �ִ� ����Ʈ�Դϴ�. " << endl;
        return;
    }
    NODE *temp = Head;
    NODE *prev = NULL;
    while (temp != NULL && temp -> Date != Item)
    {
        prev = temp;
        temp = temp ->Next;
    }
    if(temp == NULL)
    {
        cout << "���� �� ��尡 �����ϴ�. " << endl;
        return;
    }
    if (prev == NULL)
    {
        Head = Head ->Next;

        if(Head != NULL)
            Head->Prev =NULL;
        delete temp;
    }
    else
    {
        prev->Next = temp->Next;

        if(temp->Next != NULL)
            temp->Next->Prev = prev;
        
        if(prev->Next == NULL)
            Tail = prev;
            


        delete temp;    
    }
    
    
}
void DLinkedList :: RemoveLastNode()
{
    if(Head == NULL)
    {
        cout << "��� �ִ� ����Ʈ�Դϴ�. " << endl;
        return;
    }
    NODE *temp = Head;
    NODE *prev = NULL;

    if (Head ->Next == NULL)
    {
        delete Head;
        Head = NULL;
        return;
    }
    else
    {
        
        prev = Tail -> Prev;
        prev->Next = NULL;

        delete Tail;
        Tail = prev;
               
        
    }
}
void DLinkedList::RemoveAll()
{
    NODE *temp = Head;

    while (Head != NULL)
    {
        temp = Head;
        Head = Head->Next;
        delete temp;
        temp = NULL;
    }
    Tail = NULL;
}
// ��ü ��� ����
int DLinkedList::Count()
{

    int count = 0;
    NODE *temp = Head;
    
    while (temp != NULL)
    {
        count++;
        temp = temp ->Next;
    }
    
    return count;
}
void DLinkedList::PrintAllList()
{
    cout << "List = (";
    NODE *temp = Head;

    while (temp != NULL)
    {
        cout << temp->Date;
        temp = temp->Next;

        if (temp != NULL)
            cout << ", ";
        
    }
    cout << ")" << endl;
}
void DLinkedList::PrintAllListReverse()
{
    cout << "Reverse List = (";
    // NODE *temp = Head;
    NODE * temp = Tail;

    while (temp != NULL)
    {
        cout << temp->Date;
        temp = temp ->Prev;

        if (temp!= NULL)
                cout<<", ";
        
    }
    cout << ")" << endl;
}