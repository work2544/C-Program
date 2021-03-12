#include<iostream>
using namespace std;
class stagesequence{
    public: static int xx;
    public:
    string name;
    void setstage(int);
};
void stagesequence::setstage(int count)
{
    
    switch (count)//countคือเลขด่าน อันนี้สมมุติไว้ก่อน
    {
    case 1:
        stagesequence::xx=1;
        name="first";
        break;
    case 2:
        stagesequence::xx=2;
        name="second";
        break;
    
    default:
        name="error";
        break;
    }
}