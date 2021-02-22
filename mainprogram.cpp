#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

    ofstream fileWriter;
    string str;
    fileWriter.open ("firstFile.cpp");//stagename
    while (getline(cin,str)&&str!="exit")//writcode
    {
    fileWriter << str << endl;
    } 
    fileWriter.close();

    system("g++ firstFile.cpp");//calcompilerer
    system("a.exe");//run
}