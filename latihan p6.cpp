#include <iostream.h>
#include <cstring.h>
#include <conio.h>
int main()
{
char pasword[20];
string username;
login:
clrscr();
cout<<endl;
cout<<"n\n\n LOGIN ADMINISTRATOR";
cout<<"n==================================";
cout<<"n\username:";cin>>username;
cout<<"n\pasword:";cin>>pasword;

if (username=="Budi"&& strcmp(pasword,"123")==0)
{
clrscr();
cout<<"selamat datang"<<username<<endl;
}
else if (username=="rama"&& strcmp (pasword,"gataudeh")==0)
}
cout<<"selamat datang"<<username<<endl;
clrscr();
}
else
{cout<<"t\t\login gagal..."<<endl;
goto login;
}
getch();
}



