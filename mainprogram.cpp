#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

    ofstream fileWriter;
    string str;
    fileWriter.open ("firstFile.cpp");//stagename
    fileWriter <<"#include<iostream>\n";
    fileWriter <<"using namespace std;";
    fileWriter <<"int main(){\n";
    while (getline(cin,str)&&str!="exit")//writcode
    {
    fileWriter << str << endl;
    } 
    fileWriter <<"system(\"g++ firstFile_ans.cpp\");\n";//calcompilerer
    fileWriter <<"system(\"firstFile_ans.exe\");\n";//run
    fileWriter <<"return 0;}\n";
    fileWriter.close();
    system("g++ firstFile.cpp");//calcompilerer
    system("a.exe");//run
    return 0;
}