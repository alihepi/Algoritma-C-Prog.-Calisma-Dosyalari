#include<stdio.h>

int main() {
	
	int dizi[10];
	int x=0;
	int y=0;
	
	//[0-10) aras�ndaki �ift say�lar� dizimize aktar�yoruz	
	for(x=0; x<10; x++){
		dizi[x] = y;
		y += 2; 
	}
	
	for(x=0; x<10; x++){
		printf("%d ", dizi[x]);
	}
	 
	return 0;
}
