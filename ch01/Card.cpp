#include <iostream>
#include "Card.h"


using namespace std;

Card::Card(void)
{
    eSval = diamond;
    nRval = 7;
    bFaceup = true;
    cardcolor = black;
}

Card::~Card(void){}

bool Card::InFaceup()
{
    return bFaceup;
}
int Card::Rank()
{
    return nRval;
}
void Card::SetRank(int x)
{
    nRval = x;
}
colors Card::Color()
{
    return cardcolor;
}

void Card::Draw()
{
    cout << "ī�� �յ�" << bFaceup << endl;
    cout << "ī�� ����" << nRval << endl;
    cout << "ī�� ����" << eSval << endl;
    cout << "ī�� ��" << cardcolor << endl;
}
void Card::Flip()
{
    if(bFaceup=true)
        bFaceup=false;
    else   
        bFaceup=true;    

}
