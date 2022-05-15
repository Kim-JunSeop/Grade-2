#include <iostream>

using namespace std;

int main()

{
    long lArray[20] = {0};

    long(*p)[20] = &lArray;
    

    (*p)[3] = 300;

    for ( int i = 0; i < 20; i++)
    {
        cout << "*(p)= "<< lArray[i]<< endl;
    }
    
    
    return 0;
}