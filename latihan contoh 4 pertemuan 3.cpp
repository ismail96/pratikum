#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <iostream.h>

main()
{
char huruf[20];
char pindah[20];
clrscr();
cout<<"Masukan sembarang kata=";
gets(huruf);
/*proses*/
strcpy(pindah,huruf);
cout<<"pemindahannya="<<pindah;
getch();
}