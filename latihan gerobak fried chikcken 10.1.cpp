#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#include <iomanip.h>
#include <string.h>

main()
{
int x,a,ulangi;
char jenis[6]={'D','d','P','p','S','s'},*ket[6];
long bapot[6],jumhar[6]={0},hasat[6]={2500,2000,1500};
long jumbar[6]={0},pajak[6],totba[6];
pesan:
clrscr();
cout<<"\tGEROBAK FRIED CHICKEN\n";
cout<<"\--------------------------------------------------------------------------------\n";
cout<<"\tkode jenis harga\n";
cout<<"\t-----------------------------------------------------------------------\n";
cout<<"\t[D]Dada Rp 2500\n";
cout<<"\t[P]Paha Rp 2000\n";
cout<<"\t[S]Sayap Rp 1500\n";
cout<<"\t-----------------------------------------------------------------------\n";
cout<<"\tBanyak Jenis:";cin>>x;
jumbar[x]=0;
if(x<=0)
{
cout<<"\n\t\tBanyak Jenis Tidak Boleh Null";
goto akhir;
}
else
{
for(a=1;a<=x;++a)
{
cout<<"\tjenis ke-"<<a;
cout<<"\njenis potong[D/P/S]:";cin>>jenis[a];
cout<<"\tbanyak potongan:";cin>>bapot[a];
cout<<"\t-------------------------\n";
if(jenis[a]=='D'||jenis[a]=='d')
{
ket[a]="Dada";
hasat[a]=2000;
}
else if(jenis[a]=='P'||jenis[a]=='p')
{
ket[a]="paha";
hasat[a]=2000;
}
else if(jenis[a]=='S'||jenis[a]=='s')
{
ket[a]="sayap";
hasat[a]=1500;
}
else
{
cout<<"\nAnda Salah Masukan Jenis Potongan.";
hasat[a]=0;
}
jumhar[a]=hasat[a]*bapot[a];
jumbar[x]=jumbar[x]+hasat[a]*bapot[a];
if (jumbar[x]==0)
{
pajak[x]=0;
totba[x]=0;
}
else
{
pajak[x]=jumbar[x]*0.1;
totba[x]=jumbar[x]+pajak[x];
}
}
}
cout<<"\n\n\tGEROBAK FRIED CHICKEN\n";
cout<<"---------------------------------\n";
cout<<"No.	 |Jenis		|Harga		|Banyak		|Jumlah\n";
cout<<"		 |potong		|Satuan		|Beli			|Harga\n";
cout<<"==============================================================================\n";

for(a=1;a<=x;++a)
{
cout<<""<<a<<"|"<<ket[a]<<"		|"<<hasat[a];
cout<<"	   |"<<bapot[a]<<"		|Rp."<<jumhar[a]<<endl;
}
cout<<"--------------------------------------------\n";
cout<<"\t\t\tjumlah bayar Rp."<<jumbar[x]<<endl;
cout<<"\t\t\tpajak 10% Rp."<<pajak[x]<<endl;
cout<<"\t\t\ttotal bayar Rp."<<totba[x];
cout<<"\t\t\tAnda Ingin Memesan Lagi?[Y/T]=";
ulangi=getche();
if (ulangi=='Y'||ulangi=='y')
goto pesan;
else
cout<<"\n\n\t Terima Kasih";
akhir:
getche();
}
