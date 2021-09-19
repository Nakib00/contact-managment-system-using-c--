#include<iostream>
using namespace std;

void display(){
    cout<<"------------MANUE------------"<<endl;
    cout<<"1.Add new contact"<<endl;
    cout<<"2.List of all contact"<<endl;
    cout<<"3.Edit contact"<<endl;
    cout<<"4.Exit"<<endl;
}
int main(){
display();
int option;
string name,email,addrease;
long long  int num;

while(option!=4){
    cout<<"Your option :";
    cin>>option;

    if(option==1){
        cout<<"Enter Contact name :";
        cin>>name;
        cout<<"Enter Number :";
        cin>>num;
        cout<<"Email :";
        cin>>email;
        cout<<"Addrease :";
        cin>>addrease;
    }else if (option==2)
    {
        cout<<"--------List of Contact---------"<<endl;
        cout<<"Name:"<<name<<"  Phone:"<<num<<"  Email:"<<email<<"  Addrease:"<<addrease;
    }else if (option==3)
    {
        cout<<"---------Edit contact---------";
        cout<<"Enter Contact name :";
        cin>>name;
        cout<<"Enter Number :";
        cin>>num;
        cout<<"Email :";
        cin>>email;
        cout<<"Addrease :";
        cin>>addrease;
    }
}

return 0;
}