#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode,lagi;
atas:
clrscr();
cout<<"INPUT KODE BARANG[A,C]:";
kode=getche();
cout<<'\n';
switch(kode)
{
case'A':
case'a':
cout<<"Alat Olah Raga";
break;
case'B':
case'b':
cout<<"Alat Elekronik";
break;
case'C':
case'c':
cout<<"Alat Masak";

default:
cout<<"anda salah masukan kode";
}

cout<<'\n';
cout<<"\ningin pilih lagi[Y/T]";
lagi = getche();
if (lagi =='Y'||lagi=='y')
        goto atas;
getch();
}