#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string stagename="first.txt";
fstream file("first.txt", ios::out); 
string line;
streambuf* stream_buffer_cout = cout.rdbuf();
streambuf* stream_buffer_cin = cin.rdbuf();
streambuf* stream_buffer_file = file.rdbuf();
cout.rdbuf(stream_buffer_file);
for(int i=0;i<6;i++)
cout<<"*"<<endl;
file.close();
return 0;
}