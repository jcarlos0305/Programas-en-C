#include<stdio.h>

main(){
	int x=0,y[14],*z=&y;*(z++)=0x48;*(z++)=y[x++]+0x1D;
	*(z++)=y[x++]+0x07;*(z++)=y[x++]+0x00;*(z++)=y[x++]+0x03;
	*(z++)=y[x++]-0x43;*(z++)=y[x++]-0x0C;*(z++)=y[x++]+0x57;
	*(z++)=y[x++]-0x08;*(z++)=y[x++]+0x03;*(z++)=y[x++]-0x06;
	*(z++)=y[x++]-0x08;*(z++)=y[x++]-0x43;*(z++)=y[x]-0x21;
	x=*(--z);while(y[x]!=NULL)putchar(y[x++]);getchar();
}
