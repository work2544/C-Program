#include<iostream>
#include<fstream>
#include"F:\C-Program\stagename\stage.cpp"
using namespace std;
void firstinclude(string);
void userinclude();
void lastinclude();
int main(){
    stagecount setting;
    setting.setstage(1);
    string stage=setting.name; //ส่งชื่อด่านมา
    firstinclude(stage);
    userinclude();
    lastinclude();
    return 0;
}
void firstinclude(string stagename)
{

    ofstream filewritter("input.cpp");
    filewritter<<"#include<iostream>\n#include<fstream>\n#include<string>\nusing namespace std;\nint main(){\n";
    filewritter<<"string stagename=\""<<stagename<<".txt\";";
    filewritter<<"\nfstream file(stagename.c_str(), ios::out); \nstring line;\n";
    filewritter<<"streambuf* stream_buffer_cout = cout.rdbuf();\n"
    << "streambuf* stream_buffer_cin = cin.rdbuf();\n"
    << "streambuf* stream_buffer_file = file.rdbuf();\n"
    << "cout.rdbuf(stream_buffer_file);\n";
    filewritter.close();
}
void userinclude()
{
    string textline;
    ofstream filewritter("input.cpp",ios::app);
    while ((getline(cin,textline))&&textline!="exit")
    {
        filewritter<<textline;
        filewritter<<"\n";
    }
    filewritter.close();
}
void lastinclude()
{
    ofstream filewritter("input.cpp",ios::app);
    filewritter<<"file.close();\nreturn 0;\n}";
    filewritter.close();
}