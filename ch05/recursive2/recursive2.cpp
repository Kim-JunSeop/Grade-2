#include <iostream>
using namespace std;

int main(){

int a = 10;
int *const  p=NULL;

cout << "������ ���� p�� ���� " << *p << endl;

*p = 20; // ������ �ּ� p�� ����Ű�� �޸��� ���� ����



cout << "������ ���� p�� �ּҰ��� " << &p << endl;
    return 0;
}