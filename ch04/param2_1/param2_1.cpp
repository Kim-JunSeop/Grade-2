#include <iostream>

using namespace std;

void sum(int a, int b, int ret)
{
    ret = a + b;
};

int main()
{
    int ret = 0;
    sum(10,20,ret);

     cout<< "10 과 20 중 더한 값은 =  " << ret<< " 입니다." << endl;
     return 0;
}