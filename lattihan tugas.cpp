#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
float absen,tugas,uts,uas,Nilai_Akhir;

cout<<"masukan nilai ABSEN :",cin>>absen;
cout<<"masukan nilai TUGAS :",cin>>tugas;
cout<<"masukan nilai UTS :",cin>>uts;
cout<<"MASUKAN NILAI UAS :",cin>>uas;
cout<<"**************************** \n";
cout<<"********hasil_akhir********* \n";

Nilai_Akhir=(absen*0.2)+(tugas*0.2)+(uts*0.3)+(uas*0.5);

cout<<"\n\n******HASIL_AKHIR*********** :"<<endl;
cout<<"\n\nilai_akhiR******** :"<<Nilai_Akhir<<endl;

getch();
}
