#include <iostream>

using namespace std;

int main()

{
    int result = 0;
    unsigned int scores[10]={10,100,94,36,72,88,60,60,80,24};  
    
    for (int  i = 0; i < 10; ++i)
    {
        result = (scores[i]+=result);
       
    }
        result/=10;
     cout << "Æò±Õ°ª = " << result <<endl;
    return 0;
}