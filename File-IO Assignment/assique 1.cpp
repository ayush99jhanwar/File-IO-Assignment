#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream input;
string str;
int count =0;
input.open("hello.txt");

if(!input)
cout<<"The file cannot open"<<endl;
else
{
while(!input.eof())
{
input>>str;
if(str == "the" || str=="The")
{
count++;
}
}

}
cout<<"total the  words in file are:"<<count<<endl;
return 0;
}
