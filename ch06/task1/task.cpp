#include <iostream>
using namespace std;

void countdown(int n)
{
    if (n==1)
    {
        cout<< 1 << endl;
        cout<<"Launch~";
    }
    else
    {
        cout << n << endl;
        countdown( -1);
        
    }
    
        
}
int main()
{
    cout << "카운트다운을 시작합니다"<<endl;

    countdown(10);

    return 0;
}