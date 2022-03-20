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
if(str[len-1] == 's' || str[len-1]== 'S')
{
count++;
}
}

}
cout<<"total  words ends with  s are:"<<count<<endl;
return 0;
}
