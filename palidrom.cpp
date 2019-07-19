#include <iostream>
#include <cstring>
#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char s[50000];
char s_wspak[50000];
int dl;
int main(int argc, char** argv)
{
printf("Podaj ciag znakow - ");
int i=0;
while( scanf("%c", &s[i]) == 1 )
{
   if( s[i]=='\n' )
      break;
   ++i;
}
dl = strlen(s); // Ciag znakow juz w tablicy
printf("\nIlosc znakow w Twoim tekscie - %d\n",dl-1);
dl--;
//s[dl]=0;
for(i=0;dl>=-1;i++)
	{
	//printf("s_wspak - %s",s_wspak[dl]);
	s_wspak[dl]=s[i];
	dl--;
	}
printf("Twoje znaki - %s\n",s);
printf("Znaki wspaki - %s",s_wspak);
return 0;
}

