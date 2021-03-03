#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
string stagename="firstinput.txt";
fstream file(stagename.c_str(), ios::out); 
string line;
streambuf* stream_buffer_cout = cout.rdbuf();
streambuf* stream_buffer_cin = cin.rdbuf();
streambuf* stream_buffer_file = file.rdbuf();
cout.rdbuf(stream_buffer_file);
for(int i=0;i<5;i++){
for(int j=0;j<=i;j++)
cout<<"*";
cout<<"\n";
}
file.close();
return 0;
}