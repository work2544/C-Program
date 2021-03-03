#include<iostream>
#include<fstream>

using namespace std;
class userInput{
public:
void firstinclude(string);
void userinclude();
void lastinclude();
};


void userInput::firstinclude(string stagename)
{

    ofstream filewritter("input.cpp");
    filewritter<<"#include<iostream>\n#include<fstream>\n#include<string>\nusing namespace std;\nint main(){\n";
    filewritter<<"string stagename=\""<<stagename<<"input.txt\";";
    filewritter<<"\nfstream file(stagename.c_str(), ios::out); \nstring line;\n";
    filewritter<<"streambuf* stream_buffer_cout = cout.rdbuf();\n"
    << "streambuf* stream_buffer_cin = cin.rdbuf();\n"
    << "streambuf* stream_buffer_file = file.rdbuf();\n"
    << "cout.rdbuf(stream_buffer_file);\n";
    filewritter.close();
}
void userInput::userinclude()
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
void userInput::lastinclude()
{
    ofstream filewritter("input.cpp",ios::app);
    filewritter<<"file.close();\nreturn 0;\n}";
    filewritter.close();
}