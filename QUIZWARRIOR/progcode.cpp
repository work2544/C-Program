#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include <vector>
#include <string>

using namespace std;

int main(){
    srand(time(0));
    string userinp = "";
    ifstream ans("answer.txt");
    string textline;
    vector<string> answer;
    while(getline(ans,textline)){
        answer.push_back();
    }
    ans.close();
    while(true){
        int x = rand()%answer.size();
        string caller = to_string(x);
        ifstream img("folder/caller .txt");
        getline(cin,userinp);
        if(userinp == answer[x]){
            cout<<"correct\n";
        }else{
            cout<<"incorrect!\n";
        }
        if(userinp == "exit"){
            cout<<"bye\n";
            break;
        }
            
    }
}

