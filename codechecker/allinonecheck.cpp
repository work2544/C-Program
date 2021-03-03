#include<iostream>
#include"stage.cpp"
#include"compareresult.cpp"
#include"userInput.cpp"
using namespace std;
int main(){
    userInput inputuser;
    compareresult resultcompare;
    stagesequence sequence;
    sequence.setstage(1);
    string currentstage=sequence.name; //ส่งชื่อด่านมา
    inputuser.firstinclude(currentstage);
    inputuser.userinclude();
    inputuser.lastinclude();
    resultcompare.mainCompare(currentstage,currentstage);
    return 0;
}