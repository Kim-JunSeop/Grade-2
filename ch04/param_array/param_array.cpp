#include <iostream>

using namespace std;

void UsingArray(char *arr)
{
   cout<< " In UsingArray() : " << arr<< endl;
   arr[12] = '?';
}

int main()
{
    char array[] = "Hello, world!";
    UsingArray(array);

     cout<< "In Main() =  " << array << " : " << sizeof(array);
     return 0;
}