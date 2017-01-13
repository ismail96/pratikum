#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int absen,tugas,uts,uas;
float NA;

cout<<"masukan nilai ABSEN :",cin>>absen;
cout<<"masukan nilai TUGAS :",cin>>tugas;
cout<<"masukan nilai UTS :",cin>>uts;
cout<<"MASUKAN NILAI UAS :",cin>>uas;
cout<<"**************************** \n";
cout<<"********hasil_akhir*** \n";

NA=(absen*0.2)+(tugas*0.2)+(uts*0.3)+(uas*0.5);


cout<<"******HASIL_AKHIR***********   :"<<NA<<endl;

getch();
}
