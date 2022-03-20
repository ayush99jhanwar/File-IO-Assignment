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
len=str.length();
for(int i=0;i<len;i++)
{
if(str[i] == 'a' || str[i]== 'A')
{
count++;
}
}
}
}
cout<<"total  words with a in them are:"<<count<<endl;
return 0;
}
