#include <iostream>
#include "StackByLinkedList.h"

using namespace std;

bool testPair(char []);

int main()
{
   
    char str[100];

    while (true)
    {
        /* (a*b)-(c+d) 을 입력해 1이 출력되는지 확인*/
        /* (a*b)-(c+d 을 입력해 0이 출력되는지 확인*/
    cout << "검사할 수식을 입력하세요."<<endl

    <<"'0'을 입력하면 프로그램이 종료됩니다."<<endl;
    cin >>str;
        if (str[0]=='0')
            return 0;

        bool result = testPair(str);

        cout << result << endl;
    }
    return 0;
}
bool testPair(char str[])
{
    StackByLinkedList stack;

    int i = 0;
    while (true)
    {
        char currChar = str[i];
        char cheak;
        switch (currChar)
        {
        case '(' :   case '[' :   case '{' : 
        stack.Push(currChar);    
        break;

        case ')' :
        cheak=stack.Pop();
            if (cheak!='(')
                return false;
        break;    

        case ']' :
        cheak=stack.Pop();
            if (cheak!='[')
                return false;
        break;  

        case '}' :
        cheak=stack.Pop();
            if (cheak!='{')
                return false;
        break;

        case NULL:
            if (stack.IsEmpty())
                return true;            
        }
        i++;
    }
     /* (a*b)-(c+d) 을 입력해 1이 출력되는지 확인*/
    /* (a*b)-(c+d 을 입력해 0이 출력되는지 확인*/
}
