#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
int n=10,i,a,jum;
for(i=2;i<=n;i+=2)
{
	jum=0;
	for(a=2;a<=i;a+=2)
	{
	if(a!=2)
	cout<<"+";
	cout<<a;
	jum+=a;
	}
cout<<"="<<jum<<endl;
}
cout<<endl;
getch();
}