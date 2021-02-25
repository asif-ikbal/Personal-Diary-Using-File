#include<bits/stdc++.h>
#include<fstream>
#include<conio.h>
#include<string.h>

using namespace std;

int passwordf();
int check();
int mainmenu();
int write();
int read();
int exit();

string pass;
char password[8];
int asif;

int main()
{
    pass="asifcse7";
    cout<<"\n\n\t\t\t\t\t\t[*****WELCOME*****]"<<endl;
    cout<<"PLEASE ENTER THE PASSWORD : "<<endl;
    passwordf();
    check();
    system("cls");
    if(asif==0)
        mainmenu();

  return 0;
}


int passwordf(){
    char input;
    for(int i =0 ; ; ){
        input = getch();
        if((input>='a'&&input<='z')||(input>='A'&&input<='Z')||(input>='0'&&input<='9')){
            cout<<"*";
            password[i] = input;
            i++;
        }
        if(input == '\b' && i>=1){
            cout<<"\b \b";
            i--;
        }
        if(input == '\r') break;
    }
}


int check(){
    asif = 0;
    for(int i=0;i<8;i++){
        if(password[i] == pass[i]) {
            continue;
        }
        else{
            cout<<endl<< "WRONG PASSWORD"<<endl;
            asif = 1;
            break;
        }
    }
}


int mainmenu()
  {
  string data;
  int choice;
     cout<<"\n\n\t\tMAIN MENU:";
     cout<<"\n\n\tADD STORY\t[1]";
     cout<<endl;
     cout<<"\n\tVIEW OLD STORY\t[2]";
     cout<<endl;
     cout<<"\n\tEXIT\t\t[3]";
     cout<<endl;
     cout<<"\n\n\tENTER YOUR CHOICE:";
     cin>>choice;
    system("cls");
    if(choice==1)
    {
        write();
    }
    else if(choice==3)
    {
        exit();
    }
    else if(choice==2)
    {
        read();
    }
}


int write()
{
  ofstream file;
    string data;
    int choice;

        file.open("name.txt",ios::out|ios::app);
        cout<<endl<<"ENTER THE DATE :"<<endl;
        cin.ignore();
        getline(cin,data);
        file<<data<<endl;
        cout<<endl<<"ENTER THE TIME :"<<endl;

        getline(cin,data);
        file<<data<<endl;
        cout<<endl<<"ENTER THE NAME"<<endl;
        getline(cin,data);
        file<<data<<endl;
        cout<<endl<<"ADD YOUR STORY"<<endl;
        getline(cin,data);
        file<<data<<endl;
        file.close();
}



int read()
 {      string data;
  int choice;
  string password;
     ifstream file("name.txt");
        while(getline(file,data))
        {
            cout<< data<<endl;

        }
            cout<<endl;
            cout<<endl;
            cout<<endl;
            cout<<endl;
        file.close();
 }


int exit()
{
        int exit;
        cout<<endl<<"ARE YOU SURE ? "<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"\t\t\t [1] YES \t\t\t [2] NO "<<endl;
        cin>>exit;
        if(exit==1)
        {
            return 0;
        }
        else if(exit==2)
        {

            system("cls");
            mainmenu();
        }
}
