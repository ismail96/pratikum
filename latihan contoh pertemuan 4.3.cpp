#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kode,ukuran,merk[15];
long harga=0;

clrscr();
cout<<"Kode Baju:";cin>>kode;
cout<<"ukuran :";cin>>ukuran;
if(kode=='1')
  {
  strcpy(merk,"H&R");
  if(ukuran=='S'||ukuran=='S')
  harga=45000;
  else
  harga=60000;
  }
  else if(kode=='2')
  {
  strcpy(merk,"Adidas");
  if(ukuran=='S'||ukuran=='S')
  harga=75000;
  }
  else
  cout<<"salah kode baju"<<endl;

  cout<<"----------------------"<<endl;
  cout<<"merek baju:"<<merk<<endl;
  cout<<"harga baju:"<<harga<<endl;
  getch();
}