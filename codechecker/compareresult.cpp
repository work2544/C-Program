#include<iostream>
#include<fstream>
using namespace std;
class compareresult{
public:
void mainCompare(string,string);
};
void compareresult::mainCompare(string answerfile,string userfile)
{
    answerfile+="ans.txt";
    userfile+="input.txt";
    system("g++ input.cpp -o myinput");
    system("myinput.exe");
    ifstream answer(answerfile.c_str());
    ifstream user(userfile.c_str());
    string answerall,resulttemp;
    string userall,usertemp;
    
    while(getline(user,userall))
    {
        usertemp+=userall+"\n";
    }
    user.close();
    user.clear();
    while(getline(answer,answerall))
    {
       resulttemp+=answerall+"\n";
    }
    answer.close();
    answer.clear();
    cout<<"--------------------Expect-----------------\n";
    cout<<resulttemp;
    cout<<"---------------------GOT-------------------\n";
    cout<<usertemp;
    cout<<"--------------------Result-----------------\n";
    if(usertemp==resulttemp)
    cout<<"True";
    else
    cout<<"False";
}
