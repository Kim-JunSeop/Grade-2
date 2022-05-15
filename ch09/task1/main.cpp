#include <iostream>
#include "QueueByCircularLinkedList.h"


using namespace std;



int main()
{
    const int N = 41;
    const int M = 3;
    
    QueueByCircularLinkedList Q;
    
    for (int i = 1; i<=N; i++)
        Q.enQueue(i);
    
    while (Q.GetSize() > 2)
    {
        for (int j = 1; j < M; j++)
        {
            int Item = Q.deQueue();
            Q.enQueue(Item);
        }
        Q.deQueue();
    }
    
    cout << "������ �����ڰ� ���� �ڸ��� ��ȣ�� ";
    while (!Q.IsEmpty())
    {
        cout << Q.deQueue();

        if (!Q.IsEmpty())
            cout << ", ";
        
    }
    cout << " �Դϴ�."; 
    
    return 0;
}