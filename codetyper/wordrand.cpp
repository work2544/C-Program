#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include <vector>
#include"timer.cpp"
using namespace std;
int main()
{
    srand(time(0));
    WorkTime::clock clock1;
    ifstream wordsource("wordmode.txt");
    string input="",textline;
    vector<string> fixword;
     while (getline(wordsource,textline))
        {
           wordsource>>ws;
           fixword.push_back(textline);
        }
    while (input!="exit"&&clock1.sec>0)
    {
        string texture=fixword[rand()%fixword.size()];
        cout<<"Type if !! -->"<<texture<<endl;
        getline(cin,input);
        if(texture==input)
        clock1.sec++;
        else
        {
            clock1.sec=0;
        cout<<"you fue=ck up";
        }
    }
    cout<<"end game";
}