#include <iostream>
using namespace std;

int main(){

int a = 10;
int *const  p=NULL;

cout << "포인터 변수 p의 값은 " << *p << endl;

*p = 20; // 포인터 주소 p가 가리키는 메모리의 값을 변경



cout << "포인터 변수 p의 주소값은 " << &p << endl;
    return 0;
}