#include<iostream>
using namespace std;
class stagesequence{
    public: string name=" ";
    void setstage(int);
};
void stagesequence::setstage(int count)
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