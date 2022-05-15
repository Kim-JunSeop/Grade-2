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
      if (Exist(Item))
    {
        cout << "�Է���" << Item << "�� �̹� ����Ʈ�� ��ϵǾ� �ֽ��ϴ�." << endl;
        return;
    }
    NODE *temp = new NODE;

    temp->Data = Item;
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
        cout << "��� �ִ� ����Ʈ�Դϴ�." << endl;
    }
    NODE *temp = Head;
    NODE *prev = NULL;

    while (temp != NULL && temp->Data != Item)
    {
        prev = temp;
        temp = temp->Next;
    }
    if (temp == NULL)
    {
        cout << "������ ��尡 �����ϴ�. " << endl;
    }
    if (prev == NULL)
    {
        Head = Head->Next;
        Head->Prev = NULL;
        delete temp;
    }
    else
    {
        prev->Next = temp->Next;

        if (temp->Next != NULL)
            temp->Next->Prev = prev;

        delete temp;
    }
}

void DLinkedList::RemoveLastNode()
{
    if (Head == NULL)
    {
        cout << "��� �ִ� ����Ʈ�Դϴ�." << endl;
    }
    NODE *temp = Head;
    NODE *prev = NULL;

    if (Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
    }
    else
    {
        prev = Tail->Prev;
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

int DLinkedList::Count()
{
    int count = 0;

    NODE *temp = Head;

    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void DLinkedList::PrintAllList()
{
    cout << "List = (";

    NODE *temp = Head;
    while (temp != NULL)
    {
        cout << temp->Data;
        temp = temp->Next;
        if (temp != NULL)
            cout << ", ";
    }

    cout << ")"<<endl;
}

void DLinkedList::PrintAllListReverse()
{
    cout << "Reverse List (";

    NODE *temp = Tail;
    while (temp != NULL)
    {
        cout << temp->Data;
        temp = temp->Prev;

        if (temp != NULL)
            cout << ", ";
    }
    cout << ")" << endl;
}

bool DLinkedList::Exist(int Item)
{
    if (Head == NULL)
    {
        return 0;
    }
    NODE *temp = Head;
    NODE *prev = NULL;

    while (temp != NULL && temp->Data != Item)
    {
        prev = temp;
        temp = temp->Next;
    }
    if (temp == NULL)
    {
        return false;
    }
    else
        return true;
}

void DLinkedList::InsertAfter(int TargetItem, int Item)
{
    if (!Exist(TargetItem))
    {
        cout << "�Է��� TargetItem��" << TargetItem << "�̹� ����Ʈ�� �����ϴ�..." << endl;
        return;
    }
    NODE *temp = new NODE;

    temp->Data = Item;
    temp->Prev = NULL;
    temp->Next = NULL;

    NODE *FindItem = Head;

    while (FindItem != NULL && FindItem->Data != TargetItem)
    {
        FindItem = FindItem->Next;
    }
    if (FindItem->Next == NULL)
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }
    else
    {
        FindItem->Next->Prev = temp;
        temp->Next = FindItem->Next;
        FindItem->Next = temp;
        temp->Prev = FindItem;
    }
}

void DLinkedList::InsertBefore(int TargetItem, int Item)
{
    if (!Exist(TargetItem) == true)
    {
        cout << "�Է��� TargetItem��" << TargetItem << "�̹� ����Ʈ�� �����ϴ�..." << endl;
        return;
    }
    NODE *temp = new NODE;

    temp->Data = Item;
    temp->Prev = NULL;
    temp->Next = NULL;

    NODE *FindItem = Head;

    while (FindItem != NULL && FindItem->Data != TargetItem)
    {
        FindItem = FindItem->Next;
    }
    if (FindItem->Prev == NULL)
    {
        Tail->Prev = temp;
        temp->Next = FindItem;
        Head = temp;
    }
    else
    {
        FindItem->Prev->Next = temp;
        temp->Prev = FindItem->Prev;
        FindItem->Prev = temp;
        temp->Next = FindItem;
    }
}