#include<iostream>
#include<fstream>
#include <string>
using namespace std;
bool multiplechoicechecker(char);//input the correct choice (a)(b)(c)
int introducelesson();
void Accountsetting(string &);
void f1();//demo for first test
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
    cout<<"Are u ready for some test?\n";
    cin>>ready;
    if(tolower(ready)=='y')
    cout<<"Your score is "<<introducelesson()<<endl;
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
    if(Amultiplechoicechecker('a')){
        introscore++;}
    return introscore;
}
void f1(){
     //awaiting score system to be decided so void func for now
    cout<<"----------------------------------------\n";
    cout<<"INSTRUCTION\nType line(s) of correct answer type for each problem. \n";
    cout<<"Test will begin from now on\npress ENTER to start\n";
    cin.get();
    cout<<"P1:Output: Rip Cyberpunk 2077\n";
    cout<<"P2: Output: E z\n\t    pz";//newline check
    cout<<"\nP3: Declare \'s\' as an int type variable";
    cout<<"\nP4: Type a command to collect input from user to \'s\' variable";
    cout<<"\nP5: \"int A = 55.5;\"What is the value stored in variable A?";
    cout<<"\nP6: From the previous problem,why is that happening and how to fix it?";
    cout<<"\nP7: What is the output of \"std::cout<< 5/2\"";
    cout<<"\nP8: What is the output of \"std::cout<< 5/2.0\"";
    cout<<"\nP9: What is the output of \"std::cout<< 2+2*3\"";
    cout<<"\nP10: What is the output of \"std::cout<< (2+2)*3\"";
    //total score

}
/*
void Tutorial(){
    *Possibly become a file type
    cout<<"There are different type of answer for the problems.\nPlease read the problem carefully and type the correct answer type.";
    cout<<"EX1: \"Phrase answer's type\"\nWhat is the library to enable output and input in C++ program?";
    cout<<"\nUser: iostream\n Correct!";
    cout<<"\n EX2:\"Command line answer's type\"\nType the command line to enable iostream library.\n";
    cout<<"User: #include<iostreaM>\n Incorrect! Try harder next time";
    cout<<"\ninput your answer like examples given above and press ENTER button to submit\n";
    cout<<"Ex3: \"Multiple choice answer's type\"\ncout<<"What word do you use to output?\n"
        <<"A.output\n"
        <<"B.cout\n"
        <<"C.Hello\n";
    cout<<"User: C\nCorrect!";
    }
*/
bool multiplechoicechecker(char cor){
    bool stat1 = false;
    char ans=0;
    cin>>ans;
    tolower(ans);
    while(true){
        if(ans =='a'||ans=='b'||ans=='c') break;
        cout<<"Please input a b or c.\n";
        cin>>ans;
        tolower(ans);
    }
    if(ans==cor){
        cout<<"CORRECT!\n";
        stat1 = true;
    }else{
        cout<<"INCORRECT!\n";
    }
    return stat1;
}
void yesnochecker(){
    char res;
    cin>>res;
    
}
