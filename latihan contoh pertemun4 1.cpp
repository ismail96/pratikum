#include <stdio.h>
#include <conio.h>
main()
{
  int nilai,tugas;

  printf("Masukan Sebuah Nilai:");scanf("%d",&nilai);
  printf("Masukan NIlai Tugas:");scanf("%d",&tugas);

if(nilai>70)
  printf("Lulus\n");
else
  printf("Tidak Lulus\n");

getch();
}