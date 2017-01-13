#include <conio.h>
#include <iostream.h>
#include <string.h> //untuk strcpy

char coment(char ket[30],int n);// prototipe fungsi

main()
{
char lagi,c[30];
int i;
atas:
clrscr();
{
cout<<"masukan Nilai=";cin>>i;
coment(c,i);//parameter formal
cout<<c;
cout<<"\n\ningin input lagi [Y/T]:";cin>>lagi;
}
if(lagi=='Y' || lagi=='y')
goto atas;
else
getch();
}
//blok program fungsi dengan parameter aktual
char coment (char ket[30],int n)
{
int a;
a=n%2;
if(a==1)
strcpy(ket,"---Biangan Gajil---");
else
strcpy(ket,"---Bilangan Genap---");
}
