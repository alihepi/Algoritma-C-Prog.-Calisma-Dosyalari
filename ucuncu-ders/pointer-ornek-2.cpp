#include<stdio.h>

int main() {
	
	char *ptr;
	char dizi[] = {'A', 'B', 'C', 'D'};
	
	ptr = &dizi[0];
	//ptr = dizi;
	
	//dizimizin uzunlu�unu buluyoruz
	int uzunluk = sizeof(dizi);
	int x=0;
	
	//dizimizin elemanlar�n� ptr ile yazd�r�yoruz
	for(x=0; x<uzunluk; x++){
		printf("%c ", *ptr++);
	}
	
	return 0;
}
