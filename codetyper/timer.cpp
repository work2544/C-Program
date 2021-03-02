#include<iostream>
#include<Windows.h>
using namespace std;
namespace WorkTime{
class clock
{
public: int sec=10;
void clocktimmer();
};
void clock::clocktimmer(void)
{
while(1){
sec = 10;
        for(int k = 0; k<=10; k++)
        {
            cout<<sec<<endl;
            sec--;
            Sleep(1000);
            system("Cls");
        }

}
}
}
