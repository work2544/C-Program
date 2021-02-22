#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main() {

    ofstream fileWriter;
    string str;
    fileWriter.open ("firstFile.cpp");
    while (getline(cin,str)&&str!="exit")
    {
    fileWriter << str << endl;
    } 
    fileWriter.close();

    system("g++ firstFile.cpp");
    system("a.exe");
}