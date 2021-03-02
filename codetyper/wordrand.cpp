#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include <vector>
#include"timer.cpp"
using namespace WorkTime;
using namespace std;
int main()
{
    ifstream wordsource("wordmode.txt");
    WorkTime::clock clock1;
    string input="",textline;
    vector<string> fixword;
     while (getline(wordsource,textline))
        {
           wordsource>>ws;
           fixword.push_back(textline);
        }
        for (int i = 0; i < fixword.size(); i++)
        {
            cout<<fixword[i]<<endl;
        }
        
    /*while (input!="exit"&&clock1.sec>0)
    {
        cin>>input;
       
        
    }*/
    

}