#include<iostream>
#include<fstream>
using namespace std;

int main()
{
fstream input;
string str;
int count =0,len;
input.open("hello.txt");

if(!input)
cout<<"The file cannot open"<<endl;
else
{
while(!input.eof())
{
input>>str;
if(str[0] == 'e' || str[0]== 'E')
{
count++;
}
}
}
cout<<"total  words start with e are:"<<count<<endl;
return 0;
}
