#include <iostream>

using namespace std;

int main()

{
    int kor_scores[5]={100,88,92,40,76};  
    
    for (int  i = 0; i < 5; ++i)
    {
        cout << i << "��° ���� = " << kor_scores[i] <<"\n"<<endl;
    }
    
    return 0;
}