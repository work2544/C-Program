#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    system("g++ result.cpp");
    system("a.exe");
    ifstream answer("cout.txt");
    ifstream user("first.txt");
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
    cout<<"-------------------Result-----------------\n";
    if(usertemp==resulttemp)
    cout<<"\nTrue";
    else
    cout<<"\nU suck";
    return 0;
}