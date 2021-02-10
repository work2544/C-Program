#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int introducelesson();
void Accountsetting(string &);
int main()
{
    string name;
    char ready;
    Accountsetting(name);
    ofstream student(name.c_str());
    student.close();
    ifstream intro("c++intro.txt");
    string textline;
    while (getline(intro,textline))
    {
        cout<<textline<<endl;
    }
    intro.close();
    cout<<"Are u ready for some test?";
    cin>>ready;
    if(tolower(ready)=='y')
    cout<<"Your score is "<<introducelesson();
    return 0;
}
void Accountsetting(string &name)
{
char acc;
cout<<"Do you have an account?(Y,N)"<<endl;
    cin>>acc;
    acc=tolower(acc);
    if(acc=='n')
    {
    cout<<"What's your name?"<<endl;
    while (name.length()==0 )
    getline(cin,name);
    }
    else
    {
    cout << "which file do you want to open?"<<endl;
    while (name.length()==0 ) 
    getline(cin,name);
    }
    name=name+".txt";
}
int introducelesson()
{
    char ans=0;
    int introscore=0;
    cout<<"----------------------------------------\n";
    cout<<"What word do you use to output?\n"
        <<"A.output\n"
        <<"B.cout\n"
        <<"C.Hello\n";
    cin>>ans;
    switch (tolower(ans))
    {
    case 'a':
        cout<<"WRONG";
        break;
    case 'C':
        cout<<"WRONG";
        break;
    default:
        cout<<"CORRECT\n";
        introscore++;
        break;
    }
    return introscore;
}