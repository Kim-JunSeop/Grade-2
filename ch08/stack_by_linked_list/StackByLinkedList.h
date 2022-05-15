#pragma once

typedef struct nodeRecored
{
    char Date;
    nodeRecored *Next;
}NODE;

class StackByLinkedList
{
private:
    NODE *Top;
public:
    StackByLinkedList(void);
    ~StackByLinkedList(void);

    void Push(char Item);
    char Pop();
    bool IsEmpty();
    char GetTop();
    int GetSize();
};     