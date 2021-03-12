#include<iostream>
#include"stage.cpp"
#include"compareresult.cpp"
#include"userInput.cpp"
using namespace std;
int stagesequence::xx;
int main(int argc,char *argv[]){
    cout<<"lest's go";
    userInput inputuser;
    compareresult resultcompare;
    stagesequence level;
    level.setstage(atoi(argv[1]));
    cout<<level.xx;
    cout<<level.name;
    
    inputuser.firstinclude(level.name); //ส่วนนี้คือส่วนแรก จะอยู่กับปุ่มเลือกความยาก
    inputuser.userinclude();
    inputuser.lastinclude();
    resultcompare.mainCompare(level.name,level.name);
    return 0;
}