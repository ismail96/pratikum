#include <stdio.h>
#include <conio.h>
#include <iostream>

main()
{
int panjang,lebar,luas,keliling;

cout <<"masukan nilai P :",cin>>"panjang";
cout <<"masukan nilai L :",cin>>"lebar";

luas=panjang*lebar;
keliling=2*(panjang+lebar);

cout<<"hasil luas adalah:"<<luas<<endl;
cout<<"hasil keliling adalah:";cout<<keliling<<endl;

getch();
}

