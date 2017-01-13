#include <stdio.h>
#include <conio.h>
#include <iostream.h>
main()
{
char kode,nama,lagi,*bonus;
int jumbel,harga,pot,tobay,ppn;
atas:
clrscr();
cout<<"MASUKAN KODE BUKU [1,2,3]:";
kode=getche();
cout<<"masukan jumlah beli :";cin>>jumbel;
switch(kode)
{
case ('1'):
{
nama="SUKSES BELAJAR";
harga=50000;
break;
case ('2'):
nama="KUNCI PRIBADI":
harga=35000:
break;
case('3'):
nama="MENCARI MUTIARA":
harga=45000:

default;
nama="NAMA TIDAK ADA":
harga=0:
}
if(jumbel>5)
{
pot=0.1*harga;
bonus="notebook";
}
else
{
pot=0*harga;
bonus="maaf tidak dapat bonus"
}
cout<<"\n\n\==========TOKO BUKU HALIFI========"<<endl;
cout<<"   jl.keadilan No.16       "<<endl;
cout<<"============================================"<<endl;
cout<<"Nama Buku    : "<<nama<<endl;
cout<<"Harga Buku   : "<<harga<<endl;
cout<<"potongan     : "<<pot<<endl;
cout<<"bonus        : "<<bonus<<wndl;
cout<<"total bayar  : "<<total<<endl;
cout<<"ppn          : "<<ppn<<endl;
getch();
}
