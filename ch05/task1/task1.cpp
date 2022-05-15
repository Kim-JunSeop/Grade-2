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
        cout << "주문해주셔서 감사합니다."<<endl;
        cout << "주문하신 "<<order->name<<"고객님의 "<< order->type<<"신발(사이즈 :"<< order->size << ")이 주문완료되었습니다" << endl;
    }
    
}
int main()
{
    
    cout << "고객님 안녕하세요."<<endl; 
    cout << "XYZ마트입니다."<<endl;
    cout << endl;
    cout << "현재 주문 가능한 신발 종류와 사이즈는 다음과 같습니다."<<endl;
    cout << endl;
    cout << "종류 : 클래식, 사이즈 : 230"<<endl;
    cout << "종류 : 클래식, 사이즈 : 240"<<endl;
    cout << "종류 : 모던 클래식, 사이즈 : 260"<<endl;
    cout << "종류 : 모던 클래식, 사이즈 : 270"<<endl;
    cout << "종류 : 뉴젠, 사이즈 : 240"<<endl;
    cout << "종류 : 클젠, 사이즈 : 260"<<endl;
    cout << "종류 : 클젠, 사이즈 : 280"<<endl;


    cout<<"신발을 주문하시려면 주문자 이름을 입력 후 엔터를 입력해주세요"<<endl;
    Order* order = new Order;
    
    cin >> order->name;
    cout << "고객님의 이름은 "<<order->name<<"입니다"<<endl;
    while(1)
    {
        if (strcmp(order->name,"end") == 0)
        {
            cout << "프로그램을 종료합니다"<<endl;
            break;
            cout << "신발의 종류를 입력 후 엔터를 입력해주세요"<<endl;
            cin >> order->type;
            cout << "신발의 사이즈를 숫자로 입력 후 엔터를 입력해주세요"<<endl;
            cin >> order->size;
            cout << endl;
            send(order);
            delete order;
        }
        
     }
   

    cout << "추가 주문을 하시겠습니까? yes or no"<<endl;
    cin >> order->opt;
    if(strcmp(order->opt,"yes") == 0)
    {
    cout<<"신발을 주문하시려면 주문자 이름을 입력 후 엔터를 입력해주세요"<<endl;
    Order* order = new Order;
    
    cin >> order->name;
    cout << "고객님의 이름은 "<<order->name<<"입니다"<<endl;
        while(1)
        {
            if (strcmp(order->name,"end") == 0)
            {
                cout << "프로그램을 종료합니다"<<endl;
                break;
                cout << "신발의 종류를 입력 후 엔터를 입력해주세요"<<endl;
                cin >> order->type;
                cout << "신발의 사이즈를 숫자로 입력 후 엔터를 입력해주세요"<<endl;
                cin >> order->size;
                cout << endl;
                send(order);
            }
            
        }
        
    }
    else
         cout << "프로그램을 종료하겠습니다"<<endl;
    
        
    
      
}