#include <iostream>
using namespace std;
#include <cstring>
struct Order
{
    char name[20];
    char type[20];
    char opt[20];
    int size;
};

void send(Order *order)
{
    if (order != nullptr && order->size !=0)
    {
        cout << "�ֹ����ּż� �����մϴ�."<<endl;
        cout << "�ֹ��Ͻ� "<<order->name<<"������ "<< order->type<<"�Ź�(������ :"<< order->size << ")�� �ֹ��Ϸ�Ǿ����ϴ�" << endl;
    }
    
}
int main()
{
    
    cout << "���� �ȳ��ϼ���."<<endl; 
    cout << "XYZ��Ʈ�Դϴ�."<<endl;
    cout << endl;
    cout << "���� �ֹ� ������ �Ź� ������ ������� ������ �����ϴ�."<<endl;
    cout << endl;
    cout << "���� : Ŭ����, ������ : 230"<<endl;
    cout << "���� : Ŭ����, ������ : 240"<<endl;
    cout << "���� : ��� Ŭ����, ������ : 260"<<endl;
    cout << "���� : ��� Ŭ����, ������ : 270"<<endl;
    cout << "���� : ����, ������ : 240"<<endl;
    cout << "���� : Ŭ��, ������ : 260"<<endl;
    cout << "���� : Ŭ��, ������ : 280"<<endl;


    cout<<"�Ź��� �ֹ��Ͻ÷��� �ֹ��� �̸��� �Է� �� ���͸� �Է����ּ���"<<endl;
    Order* order = new Order;
    
    cin >> order->name;
    cout << "������ �̸��� "<<order->name<<"�Դϴ�"<<endl;
    while(1)
    {
        if (strcmp(order->name,"end") == 0)
        {
            cout << "���α׷��� �����մϴ�"<<endl;
            break;
            cout << "�Ź��� ������ �Է� �� ���͸� �Է����ּ���"<<endl;
            cin >> order->type;
            cout << "�Ź��� ����� ���ڷ� �Է� �� ���͸� �Է����ּ���"<<endl;
            cin >> order->size;
            cout << endl;
            send(order);
            delete order;
        }
        
     }
   

    cout << "�߰� �ֹ��� �Ͻðڽ��ϱ�? yes or no"<<endl;
    cin >> order->opt;
    if(strcmp(order->opt,"yes") == 0)
    {
    cout<<"�Ź��� �ֹ��Ͻ÷��� �ֹ��� �̸��� �Է� �� ���͸� �Է����ּ���"<<endl;
    Order* order = new Order;
    
    cin >> order->name;
    cout << "������ �̸��� "<<order->name<<"�Դϴ�"<<endl;
        while(1)
        {
            if (strcmp(order->name,"end") == 0)
            {
                cout << "���α׷��� �����մϴ�"<<endl;
                break;
                cout << "�Ź��� ������ �Է� �� ���͸� �Է����ּ���"<<endl;
                cin >> order->type;
                cout << "�Ź��� ����� ���ڷ� �Է� �� ���͸� �Է����ּ���"<<endl;
                cin >> order->size;
                cout << endl;
                send(order);
            }
            
        }
        
    }
    else
         cout << "���α׷��� �����ϰڽ��ϴ�"<<endl;
    
        
    
      
}