#include <iostream>

using namespace std;

int main()
{
    struct Friends
    {
        char name[20];
        char gender[20];
        unsigned int num_of_met[3];
        unsigned int num_of_call[3];
    };

    Friends myFirends[3] = 
    {
        {"kim", "m", {4,7,2},{1,2,3}},
        {"lee", "m", {1,2,1},{5,4,1}},
        {"park", "m", {3,4,0},{2,2,1}},
    };

    for(int i = 0; i < 3; i++)
    {
        cout << "내 친구의 이름은 " << myFirends[i].name << "이고" << endl;
        cout << " 성별은 " << myFirends[i].gender << "입니다" << endl;

        cout << "최근 3달동안 ";
        for (int j  = 0; j<3; j++)
        {
            cout<<myFirends[i].num_of_met[j]<<"번";
            
        }
        cout << "만났고 "<<endl;

        cout << "최근 3달동안 ";
         for (int j  = 0; j<3; j++)
        {
            cout<<myFirends[i].num_of_call[j]<<"번";
        }
        cout << "전화했습니다."<<endl;
    }    






}