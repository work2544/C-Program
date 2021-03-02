#include<iostream>
using namespace std;
class stagecount{
    public: string name=" ";
    void setstage(int);
};
void stagecount::setstage(int count)
{
    switch (count)//countคือเลขด่าน อันนี้สมมุติไว้ก่อน
    {
    case 1:
        name="first";
        break;
    
    default:
        name="error";
        break;
    }
}