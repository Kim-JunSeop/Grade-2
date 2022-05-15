#include <iostream>
#include "StackByLinkedList.h"

using namespace std;

bool testPair(char []);

int main()
{
   
    char str[100];

    while (true)
    {
        /* (a*b)-(c+d) �� �Է��� 1�� ��µǴ��� Ȯ��*/
        /* (a*b)-(c+d �� �Է��� 0�� ��µǴ��� Ȯ��*/
    cout << "�˻��� ������ �Է��ϼ���."<<endl

    <<"'0'�� �Է��ϸ� ���α׷��� ����˴ϴ�."<<endl;
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
     /* (a*b)-(c+d) �� �Է��� 1�� ��µǴ��� Ȯ��*/
    /* (a*b)-(c+d �� �Է��� 0�� ��µǴ��� Ȯ��*/
}
