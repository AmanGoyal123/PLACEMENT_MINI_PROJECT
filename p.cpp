#include<iostream>
#include<conio.h>

using namespace std;
int a=0;


struct Register
{
    int id;
    string email,name,password;
}R[25];

void registerAccount()
{
    system("cls");
    int ascii=178;
    char ch=ascii;
    char c;
    cout<<"\n   ";
    for(int i=0;i<=23;i++){
        cout<<ch;
    }
    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER ID ->  ";
    cin>>R[a].id;
    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER NAME ->  ";
    cin>>R[a].name;
    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER EMAIL ->  ";
    cin>>R[a].email;
    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER PASSWORD ->  ";
    do{
        c= getch();
        if(isdigit(c) || isalpha(c) || ispunct(c))
        {
            R[a].password += ch;
            cout<<"*";
        }
    }while(isdigit(c) || isalpha(c) || ispunct(c));

a++;
cout<<"\n\n\n "<<ch<<ch<<" ACCOUNT REGISTER SUCESSFULY   "<<ch<<ch;
}

void loginAccount()
{
    system("cls");
    int ascii=178;
    int c;
    char ch=ascii;
    cout<<"\n";
    for(int i=0;i<=23;i++){
        cout<<ch;
    }

    string t_email,t_password;

    if(a==0)
    {
        cout<<"\n\n\n "<<ch<<ch<<" NO ANY RECORD FOUND  "<<ch<<ch;
    }
    //t means test email and test password
    else
    {
        int found=0;
        string t_emial,t_password;
        cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER EMAIL ->  ";
        cin>>t_email;
        cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER PASSWORD ->  ";//shift+tab can shift the selected code backward
        do
        {
            c= getch();
            if(isdigit(c) || isalpha(c) || ispunct(c))
            {
                t_password += ch;
                cout<<"*";
            }
        }while(isdigit(c) || isalpha(c) || ispunct(c));
        //for loop for matching the password
        for(int k=0;k<a;k++)
        {
             if(t_email==R[k].email && t_password==R[k].password)
             {
                    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER ID ->  "<<R[k].id;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER NAME ->  "<<R[k].name;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER EMAIL ->  "<<R[k].email;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER PASSWORD ->  "<<R[k].password;
                    found++;
                    break;
             }

             if(found==0)
             {
                cout<<"\n\n\n "<<ch<<ch<<" USER DATA INCORRECT  "<<ch<<ch;
             }
        }
       

    }


}

void forgotEmail()
{
    system("cls");
    int ascii=178;
    int c;
    char ch=ascii;
    cout<<"\n";
    for(int i=0;i<=23;i++){
        cout<<ch;
    }

    string t_email,t_password;

    if(a==0)
    {
        cout<<"\n\n\n "<<ch<<ch<<" NO ANY RECORD FOUND  "<<ch<<ch;
    }
    //t means test email and test password
    else
    {
        int found=0;
        string t_password;
        cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER PASSWORD ->  ";//shift+tab can shift the selected code backward
        do
        {
            c= getch();
            if(isdigit(c) || isalpha(c) || ispunct(c))
            {
                t_password += ch;
                cout<<"*";
            }
        }while(isdigit(c) || isalpha(c) || ispunct(c));
        //for loop for matching the password
        for(int k=0;k<a;k++)
        {
             if(t_password==R[k].password)
             {
                    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER ID ->  "<<R[k].id;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER NAME ->  "<<R[k].name;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER EMAIL ->  "<<R[k].email;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER PASSWORD ->  "<<R[k].password;
                    found++;
                    break;
             }

             if(found==0)
             {
                cout<<"\n\n\n "<<ch<<ch<<" USER DATA INCORRECT  "<<ch<<ch;
             }
        }
       

    }
}

void forgotPassword()
{
    system("cls");
    int ascii=178;
    int c;
    char ch=ascii;
    cout<<"\n";
    for(int i=0;i<=23;i++){
        cout<<ch;
    }

    string t_email,t_password;

    if(a==0)
    {
        cout<<"\n\n\n "<<ch<<ch<<" NO ANY RECORD FOUND  "<<ch<<ch;
    }
    //t means test email and test password
    else
    {
        int found=0;
        string t_emial;
        cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER EMAIL ->  ";
        cin>>t_email;
        //for loop for matching the password
        for(int k=0;k<a;k++)
        {
             if(t_email==R[k].email)
             {
                    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR USER ID ->  "<<R[k].id;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER NAME ->  "<<R[k].name;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER EMAIL ->  "<<R[k].email;
                    cout<<"\n\n "<<ch<<ch<<"  ENTER YOUR USER PASSWORD ->  "<<R[k].password;
                    found++;
                    break;
             }

             if(found==0)
             {
                cout<<"\n\n\n "<<ch<<ch<<" USER DATA INCORRECT  "<<ch<<ch;
             }
        }
       

    }

}
int main()
{
    while(1)
    {
   // p:
    //system("cls");
    int choice;
    int ascii=178;
    char ch=ascii;
    cout<<"\n ";

    for(int i=0;i<=23;i++){
        cout<<ch;
    }

    cout<<"   USER AUTHINCATION PROJECT USING C++  ";
    for(int i=0;i<=23;i++)
    {
        cout<<ch;
    }

    cout<<"\n\n\n "<<ch<<ch<<ch<<"  1.    REGISTER ACCOUNT";
    cout<<"\n\n\n "<<ch<<ch<<ch<<"  2.    LOGIN ACCOUNT";
    cout<<"\n\n\n "<<ch<<ch<<ch<<"  3.    FORGOT EMAIL";
    cout<<"\n\n\n "<<ch<<ch<<ch<<"  4.    FORGOT PASSWORD";
    cout<<"\n\n\n "<<ch<<ch<<ch<<"  5.    EXIT"<<"\n\n";


    for(int i=0;i<=23;i++)
    {
        cout<<ch;
    }

    cout<<"\n\n\n "<<ch<<ch<<"  ENTER YOUR CHOICE -> ";

    cin>>choice;
    switch(choice)
    {
        case 1: 
            registerAccount();
            break;
        case 2: 
            loginAccount();
            break;
        case 3:
            forgotEmail();
            break;
        case 4:
            forgotPassword();
            break;
        case 5:
            exit(0);
        default:
            cout<<"\n\n "<<ch<<ch<<" PLEASE SELECT CORRECT OPTION   "<<ch<<ch;

    }
   // return 0;
    //goto p;
    }
}
