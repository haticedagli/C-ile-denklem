#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//De�i�kenler 
	int a;
	int b;
	int c;
	int delta;
	int kokDelta;
	int x1;
	int x2;
	//istenilen inputlar� ekrana yazd�r�yoruz.
	printf("x karenin katsayisini gir: "); 
	scanf("%d", &a);
	printf("x in katsayisini gir: ");
	scanf("%d", &b);	
	printf("sabit sayiyi gir: ");
	scanf("%d", &c);	
	
	if(a==0){  //x karenin katsays�n� 0 olmamas� i�in kullan�r�z.
		printf("x karenin katsayisi 0 olamaz.");
		return 0;
	}
	
	delta = b*b-4*a*c;
	
	kokDelta = delta^1/2;
	
	if(delta>0){ //deltam�z 0 dan b�y�k ise x1 ve x2 de�erleri a�a��daki gibidir
		x1 = ((-1)*b + kokDelta)/2*a;
		x2 = ((-1)*b - kokDelta)/2*a;
		printf("x1 : %d  ||  x2 : %d",x1,x2);
	}else if(delta == 0){ // E�er delta s�f�ra e�it olursa bunu kullan�r�z.
		x1 = (-1)*b/2*a;
		x2 = x1;
		printf("x1 : %d  ||  x2 : %d",x1,x2);
	}else{
		printf("Denklemin gercek bir koku yok.");
	}
	
	return 0;
}
