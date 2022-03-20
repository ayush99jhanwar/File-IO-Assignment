#include <iostream>
#include <fstream>
using namespace std;

class student{
    public:
    char id[50];
    char name[50];
    char branch[50];
    char location[50];

    void getstudentinfo(){
        cout<<"enter ID:"<<endl;
        cin>>id;
        cout<<"enter student name"<<endl;
        cin>>name;
        cout<<"enter branch"<<endl;
        cin>>branch;
        cout<<"enter location"<<endl;
        cin>>location;
    }

    void AddRecord(){
        fstream file;
        student stu;
        file.open("student12.dat", ios::app|ios::binary);
        stu.getstudentinfo();
        file.write((char*)&stu, sizeof(stu));
        file.close();
    }


    void findFromID(string id){
        fstream file;
        student stu;
	int flag=0;
        file.open("student12.dat", ios::in|ios::binary);
         while (file.read((char *)&stu, sizeof(stu)))
        {
            if(stu.id == id)
	{
                cout<<"ID: "<<stu.id<<endl<<"student name: "<<stu.name<<endl<<"branch: "<<stu.branch<<endl<<"location: "<<stu.location<<endl;
		flag=1;
	}
	}
	if(flag==0)
	cout<<"No records found for the entered id please enter valid id"<<endl;
        file.close();
    }
};

int main(){
    student s1;
    int choice;
    while(choice!=3){
	cout<<"enter 1 to add student information or 2 for display the information or 3 to exit: "<<endl;
	try{
        cin>>choice;
	if(choice!=1 || choice!=2 || choice!=3)
		throw choice;	
	}
	catch(int e)
	{
	cout<<"Exception:please enter valid choice"<<endl;
	}
        if(choice==1){
            s1.AddRecord(); 
        } 
        else if(choice == 2){
            cout<<"enter the ID to find: ";
            string id;
            cin>>id;
            s1.findFromID(id);
        }
    }

return 0;
}
