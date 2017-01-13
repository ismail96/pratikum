#include <conio.h>
#include <iostream.h>

main()
{
char hari[7][10];
int i,j;
clrscr();
cout<<"masukan jumlah hari:";cin>>j;
for (i=1;i<=j;i++)
{
cout<<"masukan nama hari:";cin>>hari[i];
}
clrscr();
cout<<"nama-nama hari :"<<endl;
for(i=1;1<=j;i++)
{
cout<<hari[i]<<endl;
}
getch();
}
