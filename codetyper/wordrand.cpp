#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include <vector>

using namespace std;
int main()
{
    srand(time(0));
    long int starttime=time(0);
    
    ifstream wordsource("wordmode.txt");
    string input="",textline;
    vector<string> fixword;
     while (getline(wordsource,textline))
        {
           wordsource>>ws;
           fixword.push_back(textline);
        }
    while (input!="exit")
    {
        
        string texture=fixword[rand()%fixword.size()];
        cout<<"Type if !! -->"<<texture<<endl;
        getline(cin,input);
        if(texture==input)
        {
         cout<<"correct"<<endl;   
        }
        else
        {
        cout<<"you fueck up"<<endl;
        }
    }
    long int elapse=time(0)-starttime;
        cout<<endl<<elapse;
    cout<<"end game";
}