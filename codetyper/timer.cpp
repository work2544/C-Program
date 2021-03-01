//Creating Digital Watch in C++
#include<iostream>
#include<Windows.h>
using namespace std;
namespace WorkTime{
class clock
{
public: int sec;
void clocktimmer();
};
void clock::clocktimmer(void)
{
int sec = 10;
        for(int k = 0; k<=10; k++)
        {
            if(sec == 0)
            {
                sec = 10;
            }

            cout<<sec<<endl;
            sec--;
            Sleep(1000);
            system("Cls");
        }


}
}
