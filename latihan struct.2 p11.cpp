/*-----------------------------------------------*/
/*program penggunaan srtuctur pada program*/
/*Nama File:struct2.ccp*/
/*-----------------------------------------------*/
#include <stdio.h>
#include <conio.h>
#include <iostream.h>

char ket(float n);

main()
{
int i,j=1,k=1;
struct
{
char nim[5];
char nama[15];
float nilai;
}mhs[5];

clrscr();
for(i=0;i<2;i++)
{
cout<<"data ke-"<<j++<<endl;
cout<<"masukan NIM=";cin>>mhs[i].nim;
cout<<"masukan Nama=";cin>>mhs[i].nama;
cout<<"masukan Nilai Akhir=";cin>>mhs[i].nilai;
cout<<endl;
}
clrscr();
for(i=0;i<2;i++)
{
cout<<"Data ke-"<<k++<<endl;
cout<<"NIM="<<mhs[i].nim<<endl;
cout<<"nama="<<mhs[i].nama<<endl;
cout<<"nilai akhir="<<mhs[i].nilai<<endl;
cout<<"keterangan yang didapat=";
cout<<ket(mhs[i].nilai)<<endl;
cout<<endl;
}
getch();
}
char ket(float n)
{
if(n>65)
return'L';
else
return'G';
}
