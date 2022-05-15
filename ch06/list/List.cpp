#include <iostream>
#include "list.h"
using namespace std;

List::List()
{
    Count = 0;
}

List::~List(){}

void List::Insert(int Position, int Item)
{
    if (Count==MAX)
        cout << "����Ʈ�� �� �� �ֽ��ϴ�."<<endl;
    else if (Position > Count + 1 || Position < 1)
        cout << "Position�� ������ ������ϴ�."<<endl;
    else
    {
        for (int i = Count-1 ; i >= Position-1; i--)
        {
            Date[i+1] = Date[i];
        }
        Date[Position-1] = Item;

        Count++;
    }        
    
}
void List::Delete(int Position)
{
    if(Position < 1 || Position > Count)
        cout << "Position�� ������ ������ϴ�."<< endl;
     else
    {
        for (int i = Position-1 ; i < Count; i++)
        {
            Date[i-1] = Date[i];
        }

        Count--;
    }        
}

void List::Retrieve(int Position, int *ItemPtr)
{
     if(Position < 1 || Position > Count)
        cout << "Position�� ������ ������ϴ�."<< endl;
    else    
        *ItemPtr = Date[Position-1];        
}
bool List::IsEmpty()
{
    return (Count == 0);
}
int List::Length(){
    return Count;
}
void List::PrintItem(){
    if (Count<1)
        cout<<"�� ����Ʈ�Դϴ�."<<endl;
    else
    {
        cout << "��ġ\nDate"<<endl;
        for (int i = 0; i < Count; i++)
        {
            cout << i+1<<"\t"<<Date[i]<<endl;
        }
        cout << "����Ʈ�� ���Դϴ�."<<endl;
    } 
   
    
}