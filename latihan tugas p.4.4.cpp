#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
char kode_pesawat[10],nama_pesawat[10],again;
int kelas_pesawat,harga_tiket,jumlah_tiket,total_bayar;

awal:
clrscr();

cout<<"\t\t\t\tPROGRAM TIKET PESAWAT"<<endl;
cout<<"\t\t\t\tJAKARTA MALAYSIA"<<endl;
cout<<"==============================================================================="<<endl;
cout<<"Masukan Kode Pesawat [MPT/GRD/BTV]:";gets(kode_pesawat);
cout<<"\t 1.Executive"<<endl;
cout<<"\t 2.Bisnis"<<endl;
cout<<"\t 3.Ekonomi"<<endl;
cout<<"pilih kelas [1/2/3] :";cin>>kelas_pesawat;

if(strcmp(kode_pesawat,"MPT")==0)
{
strcpy(nama_pesawat,"MERPATI");
if(kelas_pesawat==1)
{harga_tiket = 1500000;}
else if(kelas_pesawat==2)
{harga_tiket = 900000;}
else if(kelas_pesawat==3)
{harga_tiket = 500000;}
else
{harga_tiket = 0;}
}

else if (strcmp(kode_pesawat,"GRD")==0)
{
strcpy(nama_pesawat,"GARUDA");
if(kelas_pesawat==1)
{harga_tiket = 1200000;}
else if(kelas_pesawat==2)
{harga_tiket = 800000;}
else if(kelas_pesawat==3)
{harga_tiket = 400000;}
else
{harga_tiket = 0;}
}

else if (strcmp(kode_pesawat,"BTV")==0)
{
strcpy(nama_pesawat,"BATAVIA");
if(kelas_pesawat==1)
{harga_tiket = 1000000;}
else if(kelas_pesawat==2)
{harga_tiket = 700000;}
else if(kelas_pesawat==3)
{harga_tiket = 300000;}
else
{harga_tiket = 0;}
}

cout<<"Nama Pesawat :"<<nama_pesawat<<endl;
cout<<"Harga Tiket :"<<harga_tiket<<endl;
cout<<"Jumlah Tiket :";cin>>jumlah_tiket;
total_bayar=harga_tiket*jumlah_tiket;

printf("total bayar : %d",total_bayar);
printf("\n");
cout<<"\t\t\tINGIN INPUT LAGI [Y/T]:";cin>>again;
if(again=='y' || again=='y')
goto awal;
getch();
}
