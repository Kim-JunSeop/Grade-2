#include <iostream>
#include "GraphByList.h"

using namespace std;;

int main()
{
    GraphByList G;

    for (int i = 0; i < 4; i++)
    {
        G.insertVertex('A'+i);
    }
    G.insertEdge(0,1);
    G.insertEdge(0,3);
    G.insertEdge(1,2);
    G.insertEdge(1,3);
    G.insertEdge(2,3);
    
    cout << "���� ����Ʈ�� ǥ���� �׷���" << endl;
    G.printGraph();

    return 0;
}