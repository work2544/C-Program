#include<iostream>
#include"timer.cpp"

using namespace std;
int main()
{
   WorkTime::clock clock1;
   clock1.clocktimmer();
   cout<<"This is sec var in clock "<<clock1.sec; 
}


