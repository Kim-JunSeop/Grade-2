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
    cout << "카드 앞뒤" << bFaceup << endl;
    cout << "카드 숫자" << nRval << endl;
    cout << "카드 종류" << eSval << endl;
    cout << "카드 색" << cardcolor << endl;
}
void Card::Flip()
{
    if(bFaceup=true)
        bFaceup=false;
    else   
        bFaceup=true;    

}
